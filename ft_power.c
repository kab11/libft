/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblack <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 20:53:33 by kblack            #+#    #+#             */
/*   Updated: 2018/08/27 20:55:05 by kblack           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_power(int nb, int power)
{
	int hold;

	hold = 1;
	if (power < 0 || nb < 0)
	{
		return (0);
	}
	if (power == 1)
	{
		hold = power * power;
		return (hold);
	}
	while (power > 2)
	{
		hold = nb * nb;
		power--;
	}
}
