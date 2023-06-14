/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfreejoinfree.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:16:03 by mgagnon           #+#    #+#             */
/*   Updated: 2023/06/14 14:59:59 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strfreejoinfree(char *s1, char *s2)
{
	char	*ptr;
	size_t	len;

	if (!s1)
		return (s2);
	if (!s2)
		return (s1);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = malloc(len);
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s1, len);
	ft_strlcat(ptr, s2, len);
	ft_sfree(s1);
	ft_sfree(s2);
	return (ptr);
}
