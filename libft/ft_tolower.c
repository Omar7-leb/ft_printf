/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:44:42 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/10 16:46:31 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// #include<stdio.h>
// int main()
// {
// 	printf("%c\n" , ft_tolower('a'));
// 	printf("%c\n" , ft_tolower('A'));
// 	printf("%c\n" , ft_tolower('?'));
// }