/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:49:02 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/11/22 20:49:04 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size_s;
	size_t	size_substr;

	if (!s)
		return (0);
	size_s = ft_strlen(s);
	size_substr = 0;
	if (start > size_s)
	{
		return ((char *)ft_calloc(1, sizeof(char)));
	}
	if (start < size_s)
		size_substr = size_s - start;
	if (len > size_s)
		len = size_s - start + 1;
	if (size_substr > len)
		size_substr = len;
	substr = (char *)ft_calloc((size_substr + 1), sizeof(char));
	if (!substr)
		return (0);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
