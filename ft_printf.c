/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 14:48:23 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/21 15:49:23 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += print_str(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += print_nbr(va_arg(ap, int));
	else if (specifier == 'x' || specifier == 'X')
		count += print_hex(va_arg(ap, unsigned int), specifier);
	else if (specifier == 'u')
		count += print_unsigned(va_arg(ap, unsigned int));
	else if (specifier == 'p')
		count += print_pointer(va_arg(ap, unsigned long long));
	else if (specifier == '%')
		count += printpercent();
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	ft_printf(const char	*format, ...)
{
	int		count;
	va_list	ap;

	va_start(ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format != '\0')
			{
				count += print_format(*format, ap);
				format++;
			}
		}
		else
		{
			count += write(1, format, 1);
			format++;
		}
	}
	va_end(ap);
	return (count);
}

// #include<stdio.h>
// #include <limits.h> 
// int main()
// {
// 	printf(" %p %p ", (void *)LONG_MIN, (void *)LONG_MAX);
// 	ft_printf(" %p %p ", (void *)LONG_MIN, (void *)LONG_MAX);
// 	return 0;
// }
