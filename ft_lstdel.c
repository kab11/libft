/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblack <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 22:00:47 by kblack            #+#    #+#             */
/*   Updated: 2018/08/27 13:39:54 by kblack           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*currnode;
	t_list	*holder;

	holder = NULL;
	currnode = *alst;
	while (currnode)
	{
		holder = currnode->next;
		del(currnode->content, currnode->content_size);
		free(currnode);
		currnode = holder;
	}
	*alst = NULL;
}
