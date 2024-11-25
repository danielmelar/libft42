/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 13:14:32 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/11/24 13:14:32 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_check_set(char const c, char const *set)
{
	int	index;

	index = 0;
	while (set[index] != '\0')
	{
		if (set[index] == c)
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_check_set((char)*s1, set))
		s1++;
	end = ft_strlen(s1);
	start = 0;
	while (end > start && ft_check_set(s1[end - 1], set))
	{
		end--;
	}
	str = (char *)malloc((end - start + 1) * sizeof(char ));
	if (!str)
		return (0);
	ft_strlcpy(str, (s1 + start), end - start + 1);
	return (str);
}
