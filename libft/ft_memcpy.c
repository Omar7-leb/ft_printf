/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:16:31 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/12 18:18:32 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

// int main() {
//     char src[] = "Hello, world!";
//     char dst[20];

//     // Testing ft_memcpy
//     ft_memcpy(dst, src, 7);

//     // Printing the copied string
//     printf("Copied string: %s\n", dst);

//     return 0;
// }