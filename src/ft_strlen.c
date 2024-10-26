/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:30:27 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/10/26 16:30:28 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long long ft_strlen(char *str);

unsigned long long ft_strlen(char *str)
{
    unsigned long long  len;

    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }

    return (len);
}
