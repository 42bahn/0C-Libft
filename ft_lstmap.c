/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 15:21:59 by bahn              #+#    #+#             */
/*   Updated: 2021/01/01 15:23:35 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lists;
	t_list	*list;

	if (!f || !del)
		return (NULL);
	lists = NULL;
	while (lst)
	{
		if (!(list = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&lists, del);
			return (NULL);
		}
		ft_lstadd_back(&lists, list);
		lst = lst->next;
	}
	return (lists);
}
