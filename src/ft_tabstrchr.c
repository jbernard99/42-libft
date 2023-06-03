/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabstrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:54:27 by jbernard          #+#    #+#             */
/*   Updated: 2023/06/02 17:13:25 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_tabstrchr(char **token, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (token[i])
	{
		j = 0;
		while (to_find[j])
		{
			if (ft_strchr(token[i], to_find[j]))
				return (token[i]);
			j++;
		}
		i++;
	}
	return (0);
}
