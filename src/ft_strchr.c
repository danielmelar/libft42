/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 23:39:12 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/11/08 23:39:13 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c);

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (0);
}
// *s retorna a string 'incompleta' pois ele é o ponteiro para a string, logo
// se eu tenho, por ex, a string "ovo" e *s == v, ao retorna o ponteiro, ele 
// retorna até o '\0', que é 'vo'
