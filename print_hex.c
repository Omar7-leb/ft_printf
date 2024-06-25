/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:52:05 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/21 13:59:04 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	put_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		put_hex(num / 16, format);
		put_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			print_char(num + '0');
		else if (format == 'x')
			print_char(num - 10 + 'a');
		else if (format == 'X')
			print_char(num - 10 + 'A');
	}
}

int	print_hex(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
	{
		put_hex(num, format);
	}
	return (hex_len(num));
}
