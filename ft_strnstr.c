/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 23:37:05 by jbernard          #+#    #+#             */
/*   Updated: 2021/05/17 14:49:45 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	char	*ptr1;
	char	*ptr2;

	if (!*to_find)
		return ((char *)str);
	while (n-- && *str)
	{
		ptr1 = (char *)str;
		ptr2 = (char *)to_find;
		while (*ptr2 && *ptr1 == *ptr2)
		{
			ptr1++;
			ptr2++;
		}
		if (*ptr2 == 0)
			return ((char *)str);
		str++;
	}
	return (0);
}

int main(void)
{
	char str[] = "MZIRIBMZIRIBMZE123";
	char str2[] = "MZIRIBMZE";
	size_t n = 9;
	printf("%s\n", ft_strnstr(str, str2, n));
	return (0);
}
