/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 11:00:50 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/21 16:00:37 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <stdint.h>
# include <stdlib.h>
# include "libft/libft.h"

int		ft_printf(const char	*format, ...);
int		print_format(char specifier, va_list ap);
int		print_char(int c);
void	put_str(char	*str);
int		print_str(char	*str);
int		print_nbr(int n);
int		hex_len(unsigned int num);
void	put_hex(unsigned int num, const char format);
int		print_hex(unsigned int num, const char format);
int		ptr_len(uintptr_t num);
void	put_ptr(uintptr_t num);
int		print_pointer(unsigned long long ptr);
int		len_uns(unsigned int num);
char	*ft_uitoa(unsigned int n);
int		print_unsigned(unsigned int n);
int		printpercent(void);

#endif
