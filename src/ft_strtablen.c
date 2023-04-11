/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtablen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:14:12 by jbernard          #+#    #+#             */
/*   Updated: 2023/04/03 14:14:48 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strtablen(char **tab)
{
	size_t	len;

	len = 0;
	if (tab)
	{
		while (tab[len])
			len++;
	}
	return (len);
}