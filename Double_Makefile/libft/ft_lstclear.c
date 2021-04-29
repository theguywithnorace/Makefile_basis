/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timothee <timothee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 11:48:28 by timothee          #+#    #+#             */
/*   Updated: 2019/11/26 10:09:07 by tiin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	my_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	(*del)(lst->content);
	free(lst);
	return ;
}

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *c;
	t_list *n;

	if (!lst || !*lst)
		return ;
	c = (*lst);
	while (c->next)
	{
		n = c->next;
		my_lstdelone(c, del);
		c = n;
	}
	my_lstdelone(c, del);
	*lst = 0;
	return ;
}
