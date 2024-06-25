/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:36:46 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/10 16:43:20 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// #include<stdio.h>
// int main()
// {
// 	printf("%c\n" , ft_toupper('a'));
// 	printf("%c\n" , ft_toupper('A'));
// 	printf("%c\n" , ft_toupper('?'));
// }