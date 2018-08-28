/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblack <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 23:43:02 by kblack            #+#    #+#             */
/*   Updated: 2018/08/27 18:55:05 by kblack           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_range(int min, int max)
{
	int	count;
	int	*str;

	count = 0;
	str = (int*)malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
		return (0);
	}
	while (min < max)
	{
		str[count] = min;
		min++;
		count++;
	}
	str[count] = '\0';
	return (str);
}
