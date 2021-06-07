/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 14:03:43 by jbernard          #+#    #+#             */
/*   Updated: 2021/05/18 10:30:41 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ptr;

	ptr = malloc(ft_strlen(str) + 1);
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, str, ft_strlen(str));
	return (ptr);
}
