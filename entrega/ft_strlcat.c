/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:32:18 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/10/27 19:32:21 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size);

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	index;
	size_t	len_dest;
	size_t	len_src;

	index = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size < 1)
	{
		return (ft_strlen(src));
	}
	if (size <= len_dest)
	{
		return (size + len_src);
	}
	while (src[index] && len_dest + index + 1 < size)
	{
		dest[len_dest + index] = src[index];
		index++;
	}
	dest[len_dest + index] = '\0';
	return (len_dest + len_src);
}
