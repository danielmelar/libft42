/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 21:43:28 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/11/22 21:43:29 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size_s1;
	size_t	size_s2;

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	str = (char *)ft_calloc(sizeof(char), (size_s1 + size_s2) + 1);
	if (!str)
		return (0);
	// ft_memcpy(str, s1, size_s1);
	// ft_memcpy(str - size_s1, s2, size_s2);
	// str[size_s1 + size_s2 + 1] = '\0';
	while (s1 && *s1 != '\0')
		*str++ = *s1++;
	while (s2 && *s2 != '\0')
		*str++ = *s2++;
	*str = '\0';
	// return (str);
	return (str - (size_s1 + size_s2)); // subtrai para voltar pra posicao 0
}
