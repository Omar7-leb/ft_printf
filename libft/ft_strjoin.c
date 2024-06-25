/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:17:38 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/20 13:14:59 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	len;
	int		i;

	len = ft_strlen(s1) + ft_strlen(s2);
	s = ft_calloc(len + 1, sizeof(char));
	if (!s)
		return (NULL);
	len = 0;
	while (s1[len])
	{
		s[len] = s1[len];
		len++;
	}
	i = 0;
	while (s2[i])
	{
		s[len + i] = s2[i];
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     const char *s1 = "Hello, ";
//     const char *s2 = "World!";
//     char *result;

//     result = ft_strjoin(s1, s2);

//     if (result != NULL) {
//         printf("String 1: %s\n", s1);
//         printf("String 2: %s\n", s2);
//         printf("Concatenated string: %s\n", result);
//         free(result); // Free the allocated memory
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }