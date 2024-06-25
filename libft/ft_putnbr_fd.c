/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:34:11 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/12 16:11:51 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char	digit;

	if (nb < 0)
	{
		write(fd, "-", 1);
		if (nb == -2147483648)
		{
			write(fd, "2147483648", 10);
			return ;
		}
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
	}
	digit = (nb % 10) + '0';
	write(fd, &digit, 1);
}
