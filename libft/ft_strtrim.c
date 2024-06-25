/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 09:57:34 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/12 10:45:27 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	int		len;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = len - 1;
	while (end >= 0 && ft_strchr(set, s1[end]))
		end--;
	if (end < start)
		return (ft_strdup(""));
	str_trim = (char *)malloc((end - start + 2) * sizeof(char));
	if (!str_trim)
		return (NULL);
	ft_strlcpy(str_trim, s1 + start, end - start + 2);
	return (str_trim);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     // Example string and set of characters to trim
//     char input[] = "  \t  Hello, world! s  \t  ";
//     char trim_set[] = " \t";

//     // Call ft_strtrim
//     char *trimmed_str = ft_strtrim(input, trim_set);

//     // Output original and trimmed strings
//     printf("Original string: \"%s\"\n", input);
//     printf("Trimmed string:  \"%s\"\n", trimmed_str);

//     // Free allocated memory
//     free(trimmed_str);

//     return 0;
// }