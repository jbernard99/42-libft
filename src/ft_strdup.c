/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 14:03:43 by jbernard          #+#    #+#             */
/*   Updated: 2023/06/16 13:44:30 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strdup(const char *str)
{
	char	*ptr;
	size_t	len_str;
	size_t	i;

	len_str = ft_strlen(str);
	ptr = malloc(len_str + 1);
	if (!ptr)
		return (0);
	i = 0;
	while (len_str--)
		ptr[i++] = *str++;
	ptr[i] = 0;
	return (ptr);
}
