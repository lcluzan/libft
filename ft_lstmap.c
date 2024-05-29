/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouillebobby <nouillebobby@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:32:32 by nouillebobb       #+#    #+#             */
/*   Updated: 2024/05/28 14:36:37 by nouillebobb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*current;

	if (!lst || !f || !del)
		return (NULL);
	start = ft_lstnew(f(lst->content));
	current = start;
	while (lst && lst->next)
	{
		if (!current)
			return (NULL);
		current->next = ft_lstnew(f(lst->next->content));
		current = current->next;
		lst = lst->next;
	}
	return (start)
}
