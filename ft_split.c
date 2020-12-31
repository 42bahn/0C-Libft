/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 21:22:04 by bahn              #+#    #+#             */
/*   Updated: 2020/12/31 21:29:14 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countstrs(char *s, char c)
{
	size_t	cnt;

	cnt = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			cnt++;
			while (*(++s) != c)
			{
				if (*s == '\0')
					break ;
			}
		}
		else
			s++;
	}
	return (cnt);
}

char	*ft_findstr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
			return (s);
	}
	return (0);
}

size_t	ft_strclen(char *s, char c)
{
	size_t	length;
	char	*ptr;

	length = 0;
	ptr = s;
	while (*ptr != '\0' && *ptr != c)
	{
		length++;
		ptr++;
	}
	return (length);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*sptr;
	size_t	cnt_strs;
	size_t	i;

	sptr = (char *)s;
	cnt_strs = ft_countstrs(sptr, c);
	result = (char **)malloc(sizeof(char *) * cnt_strs);
	if (result == NULL)
		return (0);
	i = 0;
	while (i < cnt_strs)
	{
		result[i] = (char *)malloc(ft_strclen(ft_findstr(sptr, c), c) + 1);
		ft_strlcpy(result[i], ft_findstr(sptr, c),
ft_strclen(ft_findstr(sptr, c), c) + 1);
		sptr = ft_findstr(ft_findstr(sptr, c) +
ft_strclen(ft_findstr(sptr, c), c), c);
		i++;
	}
	return (result);
}
