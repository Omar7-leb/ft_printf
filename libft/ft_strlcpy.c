/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:28:09 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/11 17:59:08 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (*src && i + 1 < dstsize)
	{
		*dst++ = *src++;
		++i;
	}
	if (i < dstsize)
		*dst = 0;
	while (*src++)
		++i;
	return (i);
}

// #include<stdio.h>
// int main()
// {
//     char src[] = "Hello, world!";
//      char dst[20];
//     size_t copied_length;

//     // Testing ft_strlcpy
//     copied_length = ft_strlcpy(dst, src, sizeof(dst));

//     // Printing the copied string
//     printf("Copied string: %s\n", dst);
//     printf("Length of copied string: %zu\n", copied_length);

//     return 0;

// }