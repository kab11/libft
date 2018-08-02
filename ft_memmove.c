/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblack <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 09:38:38 by kblack            #+#    #+#             */
/*   Updated: 2018/07/22 21:46:37 by kblack           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char *strdst;
	const char *strsrc;
	char *tmp;
	size_t		i;

	if (!dst || !src)
		return (NULL);

	strdst = (char *)dst;
	strsrc = (const char *)src;
	tmp = (char *) [n];

	i = 0;
	while (i < n)
	{
		tmp[i] = strsrc[i];
		i++;
	}

	i = 0;
	while (i < n)
	{
		strdst[i] = tmp[i];
	}
	
	free (tmp);
}

int main (void)
{
	char dst[] = "oldstring";
	const char src[] = "newishbutreally";

	printf("Before memove dst = %s, src = %s\n", dst, src);
	ft_memmove(dst, src, 11);
	printf("After memmove dst = %s, src = %s\n", dst, src);

	return (0);
}
