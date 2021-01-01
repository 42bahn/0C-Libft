/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 20:19:32 by bahn              #+#    #+#             */
/*   Updated: 2021/01/01 17:09:37 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dptr;
	unsigned char	*sptr;

	dptr = (unsigned char*)dest;
	sptr = (unsigned char*)src;
	while (n--)
	{
		*dptr++ = *sptr;
		if ((char)*sptr == (char)c)
			break ;
		sptr++;
	}
	if (*dptr != c)
		return (0);
	return (++dptr);
}
