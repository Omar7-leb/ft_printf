/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:57:17 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/12 18:19:14 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*last;
	char		find;
	size_t		i;

	last = (char *)s;
	find = (char)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (last[i] == find)
			return (last + i);
		i--;
	}
	if (last[i] == find)
		return (last);
	return (0);
}

// #include<stdio.h>
// int main() {
//     const char *str = "Hello, world!";
//     char *result;

//     // Testing ft_strchr
//     result = ft_strrchr(str, 'o');

//     // Printing the result
//     if (result != NULL) {
//         printf("Character found: %c\n", *result);
//     } else {
//         printf("Character not found\n");
//     }

//     return 0;
// }