/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 00:49:01 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/11/23 00:49:01 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	valid_n(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (0);
	}
	if (nb == 0)
	{
		write(fd, "0", 1);
		return (0);
	}
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	return (nb);
}

void	ft_putnbr_fd(int n, int fd)
{
	char			numbers[12];
	int				index;
	int				char_number;

	n = valid_n(n, fd);
	if (n == 0)
		return ;
	index = 0;
	while (n > 0)
	{
		char_number = (n % 10) + '0';
		numbers[index++] = char_number;
		n /= 10;
	}
	while (index > 0)
	{
		write(fd, &numbers[--index], 1);
	}
}
