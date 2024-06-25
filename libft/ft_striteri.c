/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:52:46 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/20 13:19:38 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// // Your ft_striteri function definition here

// void print_index_char(unsigned int index, char *c) {
//     printf("Index: %u, Character: %c\n", index, *c);
//     // Example modification: Increment ASCII value of character
//     (*c)++;
// }

// int main() {
//     char str[] = "Hello, world!";

//     printf("Original string: %s\n", str);

//     ft_striteri(str, &print_index_char);

//     printf("Modified string: %s\n", str);

//     return 0;
// }