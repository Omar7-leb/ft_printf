/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:27:48 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/11 11:57:02 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

// #include<stdio.h>
// #include<string.h>
// int main() {
//     const char *str = "Hello, world!";
//     char *result;

//     // Testing ft_strchr
//     result = ft_memchr(str, 'o' , 1);

//     // Printing the result
//     if (result != NULL) {
//         printf("Character found: %c\n", *result);
//     } else {
//         printf("Character not found\n");
//     }

//     return 0;
// }