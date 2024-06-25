/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:19:24 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/20 13:18:09 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*new_str;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	if (s == NULL || s_len < start)
		return (ft_strdup(""));
	if (start + len < s_len)
		substr = (char *)malloc((len + 1) * sizeof(char));
	else
		substr = (char *)malloc((s_len - start + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	i = start;
	new_str = substr;
	while (i < (start + len) && *(s + i))
		*new_str++ = *(s + i++);
	*new_str = '\0';
	return (substr);
}

// #include <stdio.h>
// int main() {
//     const char *str = "Hello, World!";
//     unsigned int start = 7;
//     size_t length = 5;

//     char *substring = ft_substr(str, start, length);
//     if (substring != NULL) {
//         printf("Original string: %s\n", str);
//         printf("Substring : %s\n",substring);
//         free(substring); // Free the allocated memory
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// 	}