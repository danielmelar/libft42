/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:38:37 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/11/10 10:38:39 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (unsigned char)c)
		{
			return ((char *)s + len);
		}
		len--;
	}
	return (0);
}

	// while (*s)
	// 	s++;
	// while (*s >= 0)
	// {
	// 	if (*s == (unsigned char)c)
	// 	{
	// 		return ((char *)s);
	// 	}
	// 	s--;
	// }
	// return (0);
