/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addtolst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:18:35 by jbernard          #+#    #+#             */
/*   Updated: 2023/08/31 13:39:11 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	**ft_addtolst(char **lst, char *add)
{
	char	**new_lst;
	int		i;
	int		len;

	len = ft_strtablen(lst);
	i = 0;
	new_lst = ft_calloc(len + 2, sizeof(char *));
	while (i < len)
	{
		new_lst[i] = ft_strdup(lst[i]);
		i++;
	}
	lst = ft_freetabstr(lst);
	new_lst[i] = ft_strdup(add);
	add = ft_sfree2(add);
	new_lst[i + 1] = NULL;
	return (new_lst);
}