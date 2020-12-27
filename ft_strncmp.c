/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 15:43:04 by bahn              #+#    #+#             */
/*   Updated: 2020/12/27 18:05:23 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t		i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (i < n && ptr1[i] != '\0')
	{
		if (ptr1[i] == ptr2[i])
			i++;
		else
			return (ptr1[i] - ptr2[i]);
	}
	if (ptr1[i] == '\0')
		return (ptr1[i] - ptr2[i]);
	return (0);
}
