/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 15:46:58 by bahn              #+#    #+#             */
/*   Updated: 2020/12/21 22:35:14 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_isspace(char *str)
{
	while (*str != '\0' && (*str == ' ' || *str == '\f' || *str == '\n' ||
	*str == '\r' || *str == '\t' || *str == '\v'))
	{
		str++;
	}
	return (str);
}

int		ft_atoi(char *str)
{
	int sign;
	int nbr;

	sign = 1;
	nbr = 0;
	str = ft_isspace(str);
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		else if (*str == '+')
			sign *= 1;
		str++;
		if (!(*str >= '0' && *str <= '9') && !(*str == '-' || *str == '+'))
			return (0);
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = (nbr * 10) + (*str - 48);
		str++;
	}
	return (nbr * sign);
}
