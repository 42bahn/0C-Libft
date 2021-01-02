/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 20:19:32 by bahn              #+#    #+#             */
/*   Updated: 2021/01/02 12:10:34 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dptr;
	unsigned char	*sptr;

	dptr = (unsigned char*)dest;
	sptr = (unsigned char*)src;
	while (n-- && *dptr != '\0')
	{
		*dptr++ = *sptr;
		if ((char)*sptr == (char)c)
			break ;
		sptr++;
	}
	if (*dptr != c)
		return (dptr);
	return (++dptr);
}
