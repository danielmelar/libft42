/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 07:24:13 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/11/25 20:56:02 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_copy_memory(char *dest, const char *src, size_t nbytes)
{
	size_t	index;

	index = 0;
	while (index < nbytes)
	{
		dest[index] = src[index];
		index++;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t nbytes)
{
	const char		*msrc;
	char			*mdest;
	size_t			index;

	if (!dest && !src)
		return (0);
	index = 0;
	mdest = dest;
	msrc = src;
	if (mdest < msrc)
	{
		ft_copy_memory(mdest, msrc, nbytes);
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
