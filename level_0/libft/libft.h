/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <vdukhani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:08:22 by vdukhani          #+#    #+#             */
/*   Updated: 2023/09/21 13:21:17 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_atoi(const char *ptr);
void	ft_bzero(void *dest, size_t n);
void	*ft_calloc(size_t n_elem, size_t elem_size);
int		ft_isalum(int c);
int		ft_isalpha(int x);
int		ft_isascii(int a);
int		ft_isdigit(int y);
int		ft_isprint(int x);
void	*ft_memchr(void *buf, int ch, size_t length);
int		ft_memcmp(const char *ptr1, const char *ptr2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t l);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memset(void *str, int c, size_t n);
char	**ft_split(char const *s, char c);
char	*ft_strchr(char *str, int c);
char	*ft_strdup(const char *src);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_strlen(char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *str, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif