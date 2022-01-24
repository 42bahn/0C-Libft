/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 16:01:24 by bahn              #+#    #+#             */
/*   Updated: 2022/01/24 14:39:22 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*start_point(char const *first, char const *set)
{
	char	*start;
	char	*last;

	start = (char *)first;
	last = start + ft_strlen(start) - 1;
	while (ft_strchr((char *)set, *start) && start < last)
		start++;
	return (start);
}

static char	*last_point(char const *first, char const *set)
{
	char	*last;

	last = (char *)(first + ft_strlen((char *)first) - 1);
	while (ft_strchr((char *)set, *last) && last > first)
		last--;
	return (last);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	char	*s1_first;
	char	*s1_last;

	if (!s1)
		return (NULL);
	if (ft_strlen((char *)s1) == 0)
		return (ft_strdup(""));
	s1_first = start_point(s1, set);
	s1_last = last_point(s1, set);
	if (s1_first > s1_last)
		return (ft_strdup(""));
	else
	{
		result = (char *)malloc(s1_last - s1_first + 2);
		if (result == NULL)
			return (NULL);
		ft_strlcpy(result, s1_first, s1_last - s1_first + 2);
	}
	return (result);
}
