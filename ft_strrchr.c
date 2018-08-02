/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblack <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 08:40:08 by kblack            #+#    #+#             */
/*   Updated: 2018/07/21 12:00:45 by kblack           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	char		*last;
	const char	*str;

	last = NULL;
	str = (const char *)s;
	if (s == NULL)
		return (NULL);
	while (str)
	{
		if (*str == c)
		{
			last = (char*)str;
		}
	}
	return (last);
}
