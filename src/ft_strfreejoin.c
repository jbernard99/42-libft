/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfreejoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:20:09 by jbernard          #+#    #+#             */
/*   Updated: 2023/06/06 14:37:32 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strfreejoin(char *s1, char const *s2)
{
	char	*ptr;
	size_t	len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = malloc(len);
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s1, len);
	ft_strlcat(ptr, s2, len);
	ft_sfree(s1);
	return (ptr);
}