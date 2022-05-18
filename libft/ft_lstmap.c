/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 18:27:45 by tgerdes           #+#    #+#             */
/*   Updated: 2021/06/08 16:04:53 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_element;

	if (!lst || !f)
		return (NULL);
	new_element = ft_lstnew(f(lst->content));
	if (!new_element)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	new_list = new_element;
	lst = lst->next;
	while (lst != NULL)
	{
		ft_lstadd_back(&new_list, ft_lstnew(f(lst->content)));
		if (!new_list)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (new_list);
}
