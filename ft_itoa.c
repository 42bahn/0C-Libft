/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 17:49:43 by bahn              #+#    #+#             */
/*   Updated: 2020/12/29 22:13:33 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbrlen(int nbr)
{
	int	i;
	size_t	length;
	int	num;

	i = 1;
	length = 0;
	if (nbr < 0)
		num = nbr * -1;
	else
		num = nbr;
	while (num / i > 10)
	{
		i *= 10;
		length++;
	}
	return (++length);
}

void	ft_putnbr(char *ptr, int nb, size_t len)
{
	size_t	i;
	size_t	divisor;

	i = 0;
	divisor = 1;
	while (++i < len)
		divisor *= 10;
	while (len-- > 0)
	{
		*ptr++ = '0' + (nb / divisor);
		nb %= divisor;
		divisor /= 10;
	}
	*ptr = '\0';
}

char	*ft_itoa(int n)
{
	char	*nbr;
	size_t	len;

	printf("%d\n", n);
	len = ft_nbrlen(n);
	printf("%ld\n", len);
	
	if (n < 0)
	{
		nbr = (char *)malloc(sizeof(char) * (len + 2));
		*nbr++ = '-';
		ft_putnbr(nbr, n * -1, len);
	}
	else
	{
		nbr = (char *)malloc(sizeof(char) * (len + 1));
		ft_putnbr(nbr, n, len);
	}
	return (nbr);
	
}
