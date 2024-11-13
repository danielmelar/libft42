/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:56:08 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/11/10 11:56:09 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (n > 0)
	{
		if (((unsigned char *)s)[index] == (unsigned char)c)
		{
			return ((char *)s + index);
		}
		index++;
		n--;
	}
	return (0);
}
