/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:25:40 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/11 17:16:18 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char			*dup;
	size_t			i;
	size_t			len;

	len = ft_strlen(s);
	dup = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	if (dup == NULL)
		return (NULL);
	while (i < len && s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}
	dup[len] = '\0';
	return (dup);
}

// #include<stdio.h>
// int main() {
//     const char *original = "Hello, world!";
//     char *duplicate;

//     duplicate = ft_strdup(original);

//     if (duplicate != NULL) {
//         printf("Original string: %s\n", original);
//         printf("Duplicate string: %s\n", duplicate);
//         free(duplicate); // Free the allocated memory
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }