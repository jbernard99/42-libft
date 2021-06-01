/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 13:54:12 by jbernard          #+#    #+#             */
/*   Updated: 2021/05/11 14:09:20 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nb, size_t size)
{
	void	*ptr;
	int		total;

	if (!(ptr = malloc(nb * size)))
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}
