/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:01:19 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/10/28 22:10:27 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *string1, const char *string2, size_t limit);

int	ft_strncmp(const char *string1, const char *string2, size_t limit)
{
	size_t	count;

	count = 0;
	if (limit == 0)
		return (0);
	while (string1[count] && (count < limit - 1))
	{
		if (string1[count] != string2[count])
			break ;
		count++;
	}
	return ((unsigned char)string1[count] - (unsigned char)string2[count]);
}
