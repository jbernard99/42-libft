/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabstrcmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:00:13 by jbernard          #+#    #+#             */
/*   Updated: 2023/06/02 18:33:26 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_tabstrcmp(char **tab, char *str)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (ft_strcmp(tab[i], str) == 0)
			return (tab[i]);
		i++;
	}

	return (0);
}
