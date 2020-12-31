/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 13:54:08 by bahn              #+#    #+#             */
/*   Updated: 2020/12/31 21:34:23 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	int	i;

	i = 0;
	if (lst)
	{
		while (lst[i])
		{
			if (lst[i]->next)
				i++;
			else
				break ;
		}
		lst[i]->next = new;
	}
}
