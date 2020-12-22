/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 18:10:11 by bahn              #+#    #+#             */
/*   Updated: 2020/12/21 18:10:11 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	// char str1[] = "abcde";
    // char str2[] = "ab3de";
	// char src1[] = "aaaaa";
	// char dest1[] = "bbbbb";
    // char src2[] = "aaaaa";
	// char dest2[] = "bbbbb";
    char str3[] = "        -+--+-+++-1234a5";

	// printf("strlen : %d\n", ft_strlen(str1));
    // printf("=> str1 : %s\n", str1);
	// printf("strlcpy : %u\n", ft_strlcpy(dest1, src1, 3));
    // printf("=> src1 : %s\n", src1);
    // printf("=> dest1 : %s\n", dest1);
    // printf("strlcat : %u\n", ft_strlcat(dest2, src2, 7));
    // printf("=> src2 : %s\n", src2);
    // printf("=> dest2 : %s\n", dest2);
    // printf("strncmp : %d\n", ft_strncmp(str1, str2, 3));
    // printf("=> str1 : %s\n", str1);
    // printf("=> str2 : %s\n", str2);
    printf("atoi : %d\n", ft_atoi(str3));
    printf("=> ascii : %s\n", str3);

	return (0);
}
