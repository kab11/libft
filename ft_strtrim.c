/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblack <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 21:59:34 by kblack            #+#    #+#             */
/*   Updated: 2018/07/24 00:22:43 by kblack           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s)
{
	size_t start;
	size_t end;

	start = 0;
	if (!s)
		return (NULL);
	while (ft_isspace(s[start]))
		start++;
	if (s[start] == '\0')
		return (ft_strdup(s + start));
	end = ft_strlen(s) - 1;
	while (ft_isspace(s[end]))
		end--;
	printf("%s\n%zu\n%zu\n", s, start, end);
	return (ft_strsub(s, start, end - start + 1));
}
