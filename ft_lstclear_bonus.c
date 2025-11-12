/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:57:11 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/09 15:57:11 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list	**lst, void (*del)(void *))
{
	t_list	*node;

	while (*lst)
	{
		node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = node;
	}
}

/*
int	main(void)
{
	t_list	*lst;
	t_list	*head;

	lst = ft_lstnew("1");
	lst->next = ft_lstnew("2");
	lst->next->next = ft_lstnew("3");
	ft_lstclear(&lst, &del);
	head = (NULL);
	ft_lstclear(&head, &del);
	return (0);
}*/
