/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblack <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 08:40:08 by kblack            #+#    #+#             */
/*   Updated: 2018/08/27 14:28:37 by kblack           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char			*ft_strrchr(const char *str, int ch)
{
	char		*result;
	const char	*curr;

	result = NULL;
	curr = str;
	while (*curr)
	{
		if (*curr == ch)
			result = (char *)curr;
		curr++;
	}
	if ((char)ch == '\0')
		return ((char *)curr);
	else
		return (result);
}
