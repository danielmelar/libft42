/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:33:42 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/11/25 10:33:43 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	count;
	int	x;

	count = 0;
	x = 0;
	while (*s)
	{
		if (*s != c && x == 0)
		{
			x = 1;
			count++;
		}
		else if (*s == c)
			x = 0;
		s++;
	}
	return (count);
}

static char	*ft_fill_word(const char *str, int start, int end)
{
	char	*word;
	size_t	index;

	if (!str)
		return (0);
	index = 0;
	word = malloc((end - start + 1) * sizeof(char));
	while (start < end)
	{
		word[index] = str[start];
		index++;
		start++;
	}
	word[index] = 0;
	return (word);
}

static void	*ft_free(char **mstr, int count)
{
	int	index;

	index = 0;
	while (index < count)
	{
		free(mstr[index]);
		index++;
	}
	free(mstr);
	return (0);
}

static void	ft_valid_mstr(const void *mstr)
{
	if (!mstr)
		return ;
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		init_word;
	size_t	index;
	char	**mstr;

	mstr = ft_calloc((ft_count_word(s, c) + 1), sizeof(char *));
	index = 0;
	j = 0;
	init_word = -1;
	ft_valid_mstr(mstr);
	while (index <= ft_strlen(s))
	{
		if (s[index] != c && init_word < 0)
			init_word = index;
		else if ((s[index] == c || index == ft_strlen(s)) && init_word >= 0)
		{
			mstr[j] = ft_fill_word(s, init_word, index);
			if (!(mstr[j]))
				return (ft_free(mstr, j));
			init_word = -1;
			j++;
		}
		index++;
	}
	return (mstr);
}
