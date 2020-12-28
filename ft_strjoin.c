/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 14:18:25 by bahn              #+#    #+#             */
/*   Updated: 2020/12/28 16:03:22 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*ptr;

	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	ptr = malloc(s1_len + s2_len + 1);
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, (char *)s1, s1_len + 1);
	ft_strlcat(ptr, (char *)s2, s1_len + s2_len + 1);
	return (ptr);
}
