/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblack <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:09:11 by kblack            #+#    #+#             */
/*   Updated: 2018/08/08 21:45:30 by kblack           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	joined = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!joined || !s1 || !s2)
		return (NULL);
	if (joined)
	{
		while (s1[i] != '\0')
		{
			joined[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			joined[i] = s2[j];
			i++;
			j++;
		}
		joined[i] = '\0';
	}
	return (joined);
}
