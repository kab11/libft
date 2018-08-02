/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblack <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 10:18:01 by kblack            #+#    #+#             */
/*   Updated: 2018/07/22 21:44:10 by kblack           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *str, const char *substr)
{
	char	*haystack;
	char	*needle;

	while (*str != '\0')
	{
		haystack = (char *)str;
		needle = (char *)substr;
		while (*str != '\0' && *str == *substr)
		{
			str++;
			substr++;
		}
		if (!*needle)
			return (haystack);
		str = haystack + 1;
	}
	return (0);
}
