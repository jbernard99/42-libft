/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 23:02:33 by jbernard          #+#    #+#             */
/*   Updated: 2021/05/17 14:44:35 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	if (n == 0)
		return (0);
	while (*str1 && *str2 && --n)
	{
		if (*str1 != *str2)
			return (*(unsigned char *)str1 - *(unsigned char *)str2);
		str1++;
		str2++;
	}
	if (n < 0)
	{
		str1--;
		str2--;
	}
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}

/*
int main(void)
{
	char str[] = "1234";
	char str2[] = "1235";
	printf("%d\n", ft_strncmp(str, str2, 4));
	return (0);
}
*/