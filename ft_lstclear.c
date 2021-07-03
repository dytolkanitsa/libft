/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarg <lgarg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 12:55:45 by lgarg             #+#    #+#             */
/*   Updated: 2021/04/21 13:47:59 by lgarg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		new = *lst;
		*lst = new->next;
		free(new);
	}
	*lst = NULL;
}
