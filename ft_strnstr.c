/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 16:37:40 by bahn              #+#    #+#             */
/*   Updated: 2020/12/23 17:48:00 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *dest, char *src, unsigned int size)
{
	unsigned	int	i;
	unsigned	int	j;

	i = 0;
	j = 0;
	while (i < size && dest[i] != '\0')
	{
		j = 0;
		if (dest[i] == src[j])
		{
			while (dest[i + j] == src[j] && src[j] != '\0')
				j++;
			if (src[j] == '\0')
				return (&dest[i]);
		}
		i++;
	}
	return (0);
}
