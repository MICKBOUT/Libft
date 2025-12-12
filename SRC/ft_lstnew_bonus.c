/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:11:06 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/09 15:11:06 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = (NULL);
	return (head);
}

/*int main(void)
{
	t_list *node;

	node = ft_lstnew((void *)42);
	__builtin_printf("%d", node->content);
	return (0);
}*/