/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblack <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 13:54:12 by kblack            #+#    #+#             */
/*   Updated: 2018/07/23 10:00:16 by kblack           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *str, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memccpy(void *cpy, const void *src, int c, size_t len);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *cpy, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char const *s);
void	ft_strcat(char *str1, char *str2);
char	*ft_strchr(const char *str, int ch);
void	ft_strclr(char *s);
int		ft_strcmp (char *s1, char *s2);
void	ft_strcpy(char *s, char *t);
char	*ft_strdup(char *src);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_strlen(char *str);
void	ft_strncat(char *str1, char *str2, size_t n);
int		ft_strncmp (const char *str1, const char *str2, size_t n);
void	ft_strncpy(char *dst, char *src, size_t n);
char	*ft_strnstr(const char *str, const char *find, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *str, const char *substr);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
