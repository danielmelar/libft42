/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:12:38 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/10/27 11:52:15 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

char	*ft_strdup(const char *s);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strncmp(const char *string1, const char *string2, size_t limit);
void	*ft_memset(void *v_mem, int c, size_t n);
void	ft_bzero(void *v_mem, size_t n);
void	*ft_memcpy(void *to, const void *from, size_t l);
void	*ft_memmove(void *dest, const void *src, size_t nbytes);
void	*ft_calloc(size_t nmemb, size_t size);

#endif
