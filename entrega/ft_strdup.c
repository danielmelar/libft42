/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 00:14:14 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/11/13 00:14:15 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*arr;

	arr = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);
	ft_memcpy(arr, s, ft_strlen(s));
	arr[ft_strlen(s)] = '\0';
	return (arr);
}
