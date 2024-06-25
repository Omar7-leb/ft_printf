/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:23:14 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/12 18:07:29 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*str;
	size_t			i;
	size_t			len;

	str = (unsigned char *)s;
	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}

// #include<stdio.h>
// int main() {
//     const char *str = "Hello, world!";
//     char *result;

//     // Testing ft_strchr
//     result = ft_strchr(str, 'o');

//     // Printing the result
//     if (result != NULL) {
//         printf("Character found: %c\n", *result);
//     } else {
//         printf("Character not found\n");
//     }

//     return 0;
// }