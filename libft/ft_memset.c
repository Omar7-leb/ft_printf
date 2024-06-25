/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:00:38 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/12 16:15:08 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
		ptr[i++] = (unsigned char)c;
	return (s);
}

// #include <stdio.h>
// int main() {
//     char str[20] = "Hello, world!";
//     printf("Before memset: %s\n", str);

//     // Using memset to fill str with 'X' character
//     ft_memset(str, 'X', 10); // Fill first 10 characters with 'X'

//     printf("After memset: %s\n", str);

//     return 0;
// }
