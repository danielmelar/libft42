/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 08:07:30 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/11/11 09:00:23 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	ci;

	i = 0;
	if (s2[i] == '\0')
	{
		return ((char *) s1);
	}
	while (s1[i] && i < n)
	{
		ci = 0;
		while (s1[i + ci] == s2[ci] && (i + ci) < n)
		{
			ci++;
			if (s2[ci] == '\0')
				return ((char *) &(s1[i]));
			else if (s2[ci] != s1[i + ci] || s1[i + ci] == '\0')
				break ;
		}
		i++;
	}
	return (0);
}

// WTF: atribuindo 0 a cindex na linha 23(abaixo da declaração do index)
// dá erro em um teste. WHY?
