/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 16:01:24 by bahn              #+#    #+#             */
/*   Updated: 2020/12/28 16:57:09 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	char	*s1_ptr;
	size_t	i;

	s1_ptr = (char *)s1;
	result = malloc(ft_strlen((char *)s1) + 1);
	if (!result)
		return (0);
	i = 0;
	while (*s1_ptr != '\0')
	{
		if (!ft_memchr((char *)set, *s1_ptr, ft_strlen((char *)set)))
			result[i++] = *s1_ptr;
		s1_ptr++;
	}
	return (result);
}
