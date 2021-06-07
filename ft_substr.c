/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 16:54:43 by jbernard          #+#    #+#             */
/*   Updated: 2021/05/16 17:46:22 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	void	*ptr;

	if (!s || ft_strlen(s) < start || !len)
		return (ft_strdup(""));
	if (!(ptr = malloc(len)))
		return (0);
	ft_strlcpy(ptr, s + start, len);
	return (ptr);
}
