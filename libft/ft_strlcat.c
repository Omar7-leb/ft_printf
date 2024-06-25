/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:02:54 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/10 16:20:09 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	dest_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	i = dest_len;
	j = 0;
	while (src[j] && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (dest_len < size)
		dest[i] = '\0';
	return (dest_len + src_len);
}

// #include<stdio.h>
// int main() {
//     char dest[20] = "Hello, ";
//     char src[] = "world!";
//     unsigned int total_length;

//     // Testing ft_strlcat
//     total_length = ft_strlcat(dest, src, sizeof(dest));

//     // Printing the concatenated string
//     printf("Concatenated string: %s\n", dest);
//     printf("Total length: %u\n", total_length);

//     return 0;
// }