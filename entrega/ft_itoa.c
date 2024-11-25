/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:49:45 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/11/25 16:49:46 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int nb)
{
	int	count;

	count = 0;
	if (nb <= 0)
	{
		count++;
	}
	while (nb != 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			lenght;

	lenght = int_len(n);
	str = malloc(sizeof(char) * (lenght + 1));
	if (!str)
		return (0);
	str[lenght--] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
		str[0] = '-';
	while (n != 0)
	{
		if (str[0] == '-')
			str[lenght] = '0' + - (n % 10);
		else
			str[lenght] = '0' + (n % 10);
		n /= 10;
		lenght = lenght - 1;
	}
	return (str);
}
