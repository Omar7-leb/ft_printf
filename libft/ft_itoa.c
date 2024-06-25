/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:34:21 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/12 12:46:43 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_nb(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count = 1;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str_num;
	size_t		digits;
	long int	num;

	num = n;
	digits = count_nb(n);
	if (n < 0)
	{
		num *= -1;
		digits++;
	}
	str_num = (char *)malloc(sizeof(char) * (digits + 1));
	if (!str_num)
		return (NULL);
	*(str_num + digits) = 0;
	while (digits--)
	{
		*(str_num + digits) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(str_num + 0) = '-';
	return (str_num);
}

// #include "libft.h"
// #include <stdio.h>

// int main() {
//     int numbers[] = {12345, -6789, 0, 987654321, -2147483648};
//     int num_count = sizeof(numbers) / sizeof(numbers[0]);

//     for (int i = 0; i < num_count; i++) {
//         int num = numbers[i];
//         char *str = ft_itoa(num);
//         if (str != NULL) {
//             printf("Integer %d as string: %s\n", num, str);
//             free(str);
//         } else {
//             printf("Memory allocation failed for number %d.\n", num);
//         }
//     }

//     return 0;
// }