/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 22:12:46 by jbernard          #+#    #+#             */
/*   Updated: 2021/05/17 11:44:16 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isinset(char c, char const *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	char	*start;
	char	*end;
	size_t	len;

	start = (char *)s1;
	end = start + ft_strlen(s1);
	while (*start && is_included(*start, set))
		++start;
	while (start < end && isincluded(*(end - 1), set))
		--end;
	len = end - start + 1;
	if (!(ptr = malloc(len)))
		return (0);
	ft_strlcpy(ptr, start, len);
	return (ptr);
}
