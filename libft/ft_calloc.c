/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:03:35 by oallawa           #+#    #+#             */
/*   Updated: 2024/06/20 13:17:31 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*temp;

	if (count && size > 4294967295 / count)
	{
		return (NULL);
	}
	temp = (void *) malloc(count * size);
	if (!temp)
		return (NULL);
	ft_bzero(temp, count * size);
	return (temp);
}
