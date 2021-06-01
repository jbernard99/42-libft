/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:43:15 by jbernard          #+#    #+#             */
/*   Updated: 2021/05/17 11:55:10 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;

	if (!(ptr = malloc(ft_strlen(s) + 1)))
		return (0);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		++i;
	}
	ptr[i] = 0;
	return (ptr);
}
