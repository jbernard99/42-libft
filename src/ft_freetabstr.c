/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetabstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:36:36 by jbernard          #+#    #+#             */
/*   Updated: 2023/04/20 14:44:23 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_freetabstr(char **tab)
{
	int	i;

	if (tab)
	{
		i = 0;
		while (tab[i])
		{
			free(tab[i]);
			i++;
		}
	}
	free(tab);
}
