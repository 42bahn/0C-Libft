/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 15:42:03 by bahn              #+#    #+#             */
/*   Updated: 2020/12/23 20:43:53 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_return(size_t size, size_t dst_len,
size_t src_len)
{
	if (size >= dst_len)
		return (src_len + dst_len);
	else
		return (src_len + size);
}

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;

	i = 0;
	j = 0;
	dest_len = (size_t)ft_strlen(dest);
	while (dest[i] != '\0')
		i++;
	while (j + dest_len + 1 < size && src[j] != '\0')
	{
		dest[i] = src[j++];
		i++;
	}
	dest[i] = '\0';
	return (ft_return(size, dest_len, ft_strlen(src)));
}
