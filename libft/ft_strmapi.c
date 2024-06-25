/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:51:18 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/12 13:49:51 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include "libft.h"
// #include <stdio.h>

// char to_upper(unsigned int index, char c) {
// 	(void)index;
//     if (c >= 'a' && c <= 'z') {
//         return c - ('a' - 'A'); // Convert to uppercase
//     }
//     return c; // Return unchanged if not lowercase
// }

// int main() {
//     const char *str = "hello world";
//     char *result = ft_strmapi(str, &to_upper);

//     if (result != NULL) {
//         printf("Original string: %s\n", str);
//         printf("String after applying ft_strmapi: %s\n", result);
//         free(result); // Remember to free the allocated memory
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }