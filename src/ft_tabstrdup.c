/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabstrdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:33:13 by jbernard          #+#    #+#             */
/*   Updated: 2023/09/25 13:09:53 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	**ft_tabstrdup(char **tab)
{
	char	**n_tab;
	int		i;

	n_tab = (char **)malloc(sizeof(char *) * (ft_strtablen(tab) + 1));
	i = 0;
	while (*tab)
		n_tab[i++] = ft_strdup(*tab++);
	n_tab[i] = NULL;
	return (n_tab);
}
