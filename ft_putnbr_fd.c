/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 14:59:00 by bahn              #+#    #+#             */
/*   Updated: 2020/12/30 15:08:03 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	char c;

	c = '0';
	if (n >= 0)
	{
		if (n / 10 > 0)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar(c + n % 10, fd);
	}
	else
	{
		ft_putchar('-', fd);
		if ((n / 10) * -1 > 0)
			ft_putnbr_fd((n / 10) * -1, fd);
		ft_putchar(c + ((n % 10) * -1), fd);
	}
}
