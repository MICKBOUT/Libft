/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:09:39 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/09 16:09:39 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)	(void *))
{
	t_list	*head;
	t_list	*node;

	if (!lst || !*f || !*del)
		return (NULL);
	head = (NULL);
	while (lst != NULL)
	{
		node = malloc(sizeof(t_list));
		if (!node)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		node->content = (*f)(lst->content);
		node->next = (NULL);
		ft_lstadd_back(&head, node);
		lst = lst->next;
	}
	return (head);
}

/*int	ft_lstmap_rec(t_list *lst, t_list **new, void *(*f)(void *))
{
	int		state;

	if (lst == NULL)
	{
		*new = NULL;
		return (0);
	}
	*new = malloc(sizeof(t_list));
	if (!(*new))
		return (-1);
	*new->content = (*f)(lst->content);
	return (ft_lstmap_rec(lst->next, &new->next, f));
}*/

/*
void	*f(void	*lst)
{
	return (lst);
}

void	del(void *n)
{
	n = (NULL);
}

int main(void)
{
	t_list	*lst = ft_lstnew("4");
	lst->next = ft_lstnew("2");
	t_list *head = ft_lstmap(lst, &f, &del);
	write(1, head->content, 1);
	write(1, head->next->content, 1);
	ft_lstclear(&head, *del);
	ft_lstclear(&lst, *del);
	return (0);
}*/
