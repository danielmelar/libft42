/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:35:36 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/10/27 15:35:38 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *v_mem, int r, size_t n);

void	*ft_memset(void *v_mem, int r, size_t n)
{
	size_t		index;
	char		*m_mem;

	m_mem = v_mem;
	index = 0;
	while (n != 0)
	{
		m_mem[index] = r;
		index++;
		n--;
	}
	return (m_mem);
}
