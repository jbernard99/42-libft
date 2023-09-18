/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printtab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:14:53 by jbernard          #+#    #+#             */
/*   Updated: 2023/09/18 13:24:51 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_printtab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		printf("[%s, ", tab[i]);
		i++;
	}
	printf("]\n");
}
