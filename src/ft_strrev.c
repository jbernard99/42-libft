/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:17:37 by jbernard          #+#    #+#             */
/*   Updated: 2023/05/14 14:23:34 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strrev(char *str)
{
	int		size;
	int		i;
	char	*ret;

	size = ft_strlen(str);
	ret = malloc((size + 1) * sizeof(char));
	if (size == 1)
	{
		ret[0] = str[0];
		ret[1] = '\0';
		return (ret);
	}
	size--;
	i = 0;
	while (size >= 0)
		ret[i++] = str[size--];
	ret[i] = '\0';
	return (ret);
}
