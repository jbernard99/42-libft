/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sfree.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:04:28 by jbernard          #+#    #+#             */
/*   Updated: 2023/06/14 13:33:48 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>

void	ft_sfree(void *tofree)
{
	if (tofree)
	{
		printf("\nFREE(%s)\n", tofree);
		free(tofree);
		tofree = NULL;
	}
}