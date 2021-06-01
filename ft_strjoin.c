/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 16:54:55 by jbernard          #+#    #+#             */
/*   Updated: 2021/05/16 22:09:19 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	void	*ptr;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(*ptr = malloc(len)))
		return (0);
	ft_strlcpy(ptr, s1, len);
	ft_strlcat(ptr, *s2, len);
	return (ptr);
}
