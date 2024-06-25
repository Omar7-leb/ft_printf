/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:54:46 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/10 15:18:00 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <stdio.h>
// int main() {
//     char str[20] = "Hello, world!";
//     printf("Before bzero: %s\n", str);

//     // Using ft_bzero to fill the first 10 characters of str with null bytes
//     ft_bzero(str, 3);

//     printf("After bzero: %s\n", str);

//     return 0;
// }