/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 07:24:13 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/11/12 07:24:14 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t nbytes);

void	*ft_memmove(void *dest, const void *src, size_t nbytes)
{
	const char		*msrc;
	char			*mdest;
	size_t			index;

	index = 0;
	mdest = dest;
	msrc = src;
	if (mdest < msrc)
	{
		while (index < nbytes)
		{
			mdest[index] = msrc[index];
			index++;
		}
	}
	else
	{
		index = nbytes;
		while (index > 0)
		{
			index--;
			mdest[index] = msrc[index];
		}
	}
	return (dest);
}
