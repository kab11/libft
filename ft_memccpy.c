/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblack <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 23:14:58 by kblack            #+#    #+#             */
/*   Updated: 2018/07/20 11:40:10 by kblack           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *cpy, const void *src, int c, size_t len)
{
	unsigned char	*strcpy;
	unsigned char	*strsrc;
	size_t			i;

	strcpy = (unsigned char *)cpy;
	strsrc = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		if ((*strcpy++ = *strsrc++) == c)
			return (cpy);
		i++;
	}
	return ('\0');
}
