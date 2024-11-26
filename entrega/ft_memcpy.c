/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:03:52 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/10/27 18:03:53 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t l);

void	*ft_memcpy(void *to, const void *from, size_t l)
{
	const char	*m_from;
	size_t		index;
	char		*m_to;

	if (!to && !from)
		return (0);
	index = 0;
	m_to = to;
	m_from = from;
	while (index < l)
	{
		m_to[index] = m_from[index];
		index++;
	}
	return (to);
}
