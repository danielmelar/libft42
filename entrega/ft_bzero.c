/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:26:04 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/10/27 16:26:05 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *v_mem, size_t n);

void	ft_bzero(void *v_mem, size_t n)
{
	size_t		index;
	char		*m_mem;

	m_mem = v_mem;
	index = 0;
	while (n != 0)
	{
		m_mem[index] = '\0';
		index++;
		n--;
	}
}
