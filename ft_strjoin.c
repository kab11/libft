/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblack <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:09:11 by kblack            #+#    #+#             */
/*   Updated: 2018/07/23 14:45:23 by kblack           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	join;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	join = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!join)
		return (NULL);
	while (s1)
	{
		join[i] = s1[i];
		i++
	}
	while (s2)
	{
		join[i] = s2[i];
		i++;
	}
	return (join);
}
