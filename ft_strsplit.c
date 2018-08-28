/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblack <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 22:05:11 by kblack            #+#    #+#             */
/*   Updated: 2018/08/27 19:00:19 by kblack           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		words(char const *str, const char ch)
{
	const char	*string;
	int			i;
	int			wc;

	string = str;
	i = 0;
	wc = 0;
	while (string[i] != '\0')
	{
		if (string[i] == ch)
			i++;
		if (string[i] != ch && string[i])
		{
			wc++;
			while (string[i] != ch && string[i])
				i++;
		}
	}
	return (wc);
}

static char		*mem_alloc(char const *str, size_t n)
{
	char		*mem;
	size_t		i;

	i = 0;
	if (!n || !str)
		return (NULL);
	mem = (char *)malloc(sizeof(char) * (n + 1));
	if (!mem)
		return (NULL);
	while (i < n)
	{
		mem[i] = str[i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}

char			**ft_strsplit(char const *s, char c)
{
	int			i;
	int			k;
	char		**array;

	k = 0;
	if (!s || !c)
		return (NULL);
	i = words(s, c);
	if (!(array = (char **)malloc(sizeof(char *) * (i + 1))))
		return (NULL);
	array[i] = NULL;
	while (s[i] != '\0')
	{
		while (*s == c && *s)
			s++;
		i = 0;
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
			array[k++] = mem_alloc(s, i);
			s += i;
		}
	}
	return (array);
}
