/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 15:42:03 by bahn              #+#    #+#             */
/*   Updated: 2020/12/21 15:42:05 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_return(unsigned int size, unsigned int dst_len,
unsigned int src_len)
{
	if (size >= dst_len)
		return (src_len + dst_len);
	else
		return (src_len + size);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;

	i = 0;
	j = 0;
	dest_len = ft_strlen(dest);
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
