/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 21:22:04 by bahn              #+#    #+#             */
/*   Updated: 2020/12/29 16:36:25 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countstrs(char *s, char c)
{
	size_t cnt;
	
	cnt = 0;
	while (*s != '\0')
	{
		if(ft_strchr(s, c))
		{
			s = ft_strchr(s, c) + 1;
			cnt++;
		}
		else
		{
			cnt++;
			break ;
		}
	}
	return (cnt);
}

/*
size_t	ft_splitlen(char *s)
{
	
}
*/

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*sptr;
	size_t	cnt_strs;
	size_t	i;

	sptr = (char *)s;
	cnt_strs = ft_countstrs(sptr, c);
	result = (char **)malloc(sizeof(char *) * cnt_strs);
	
	i = 0;
	while (i < cnt_strs)
	{
		if (i == cnt_strs - 1)
		{
			result[i] = (char *)malloc(sizeof(char) * (ft_strchr(sptr, '\0') - sptr) + 1);
			ft_strlcpy(result[i], sptr, ft_strchr(sptr, '\0') - sptr + 1);
			printf("%s\n", result[i]);
		}
		else
		{
			result[i] = (char *)malloc(sizeof(char) * (ft_strchr(sptr, c) - sptr) + 1);
			ft_strlcpy(result[i], sptr, ft_strchr(sptr, c) - sptr + 1);
			printf("%s\n", result[i]);
			sptr = ft_strchr(sptr, c) + 1;
		}
		i++;
	}
	
	return (result);
}
