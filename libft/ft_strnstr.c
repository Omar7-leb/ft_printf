/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:16:09 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/11 15:04:15 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!ft_strlen(little))
		return ((char *)big);
	i = 0;
	while (i < len && *(big + i))
	{
		j = 0;
		while ((i + j) < len && *(big + i + j) == *(little + j))
		{
			if (!*(little + j + 1))
				return ((char *)(big + i));
			j++;
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main() {
//     const char haystack[] = "Hello, World! This is a test string.";
//     const char needle[] = "Hello";
//     char *result;

//     // Search for the needle in the haystack with limited length
//     result = ft_strnstr(haystack, needle, sizeof(haystack));

//     if (result != NULL) {
//         printf("'%s' found at index %ld\n", needle, result - haystack);
//     } else {
//         printf("'%s' not found\n", needle);
//     }

//     return 0;
// }