/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 10:26:08 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/21 13:58:04 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_uns(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		len;

	len = len_uns(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		len --;
	}
	return (num);
}

int	print_unsigned(unsigned int n)
{
	int		print_len;
	char	*num;

	print_len = 0;
	if (n == 0)
		print_len += write(1, "0", 1);
	else
	{
		num = ft_uitoa(n);
		print_len += print_str(num);
		free(num);
	}
	return (print_len);
}
