/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabstrcmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:00:13 by jbernard          #+#    #+#             */
/*   Updated: 2023/06/02 17:01:02 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_tabstrcmp(char **tab, char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (tab[i])
	{
		j = 0;
		if (ft_strcmp(tab[i], str) == 0)
			return tab[i];
	}
	return (0);
}
