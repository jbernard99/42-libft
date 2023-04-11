/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtablen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2023/04/03 14:14:12 by jbernard          #+#    #+#             */
/*   Updated: 2023/04/03 14:14:48 by jbernard         ###   ########.fr       */
=======
/*   Created: 2023/04/06 10:58:30 by jbernard          #+#    #+#             */
/*   Updated: 2023/04/06 10:59:14 by jbernard         ###   ########.fr       */
>>>>>>> 97276c007b3dd60f22d22443ece754d6d8ac913f
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