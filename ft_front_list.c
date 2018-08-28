/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_front_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblack <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 20:47:53 by kblack            #+#    #+#             */
/*   Updated: 2018/08/27 20:55:28 by kblack           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_front_list(t_list **begin_list, void *data)
{
	t_list *current;
	t_list *n_elem;

	current = *begin_list;
	if (*begin_list)
	{
		n_elem = ft_create_elem(data);
		n_elem->next = current;
		*begin_list = n_elem;
	}
	else
		*begin_list = ft_create_elem(data);
}
