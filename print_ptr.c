/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 10:12:51 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/21 15:58:57 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ptr_len(uintptr_t num)
{
	int	length;

	length = 0;
	while (num != 0)
	{
		length++;
		num = num / 16;
	}
	return (length);
}

void	put_ptr(uintptr_t num)
{
	if (num >= 16)
	{
		put_ptr(num / 16);
		put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
		{
			print_char(num + '0');
		}
		else
		{
			print_char(num - 10 + 'a');
		}
	}
}

int	print_pointer(unsigned long long ptr)
{
	int	pointer_len;

	pointer_len = 0;
	if (ptr == 0)
	{
		pointer_len += print_str("(nil)");
	}
	else
	{
		pointer_len += print_str("0x");
		put_ptr(ptr);
		pointer_len += ptr_len(ptr);
	}
	return (pointer_len);
}
