/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sfree2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:19:35 by mgagnon           #+#    #+#             */
/*   Updated: 2023/08/29 13:37:43 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_sfree2(void *tofree)
{
	if (tofree)
		free(tofree);
	return (NULL);
}
