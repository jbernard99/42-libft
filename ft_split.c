/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:41:31 by jbernard          #+#    #+#             */
/*   Updated: 2021/05/17 11:44:21 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_word_count(char const *str, char c)
{
	size_t	cnt;

	cnt = 0;
	while (*str)
	{
		if (*str != c)
		{
			++cnt;
			while (*str && *str != c)
				++str;
		}
		else
			++str;
	}
	return (cnt);
}

char	*split_main(const char *s, char c)
{
	char *ptr;
	size_t size;

	while (*s)
	{
	    size = 0;
		while (*s == c)
			s++;
		while (*s)
		{
			size++;
			if (s[1] == c)
			{
				ptr = malloc(sizeof(char) * size + 1);
				if (!ptr)
					return (0);
				ft_strlcpy(ptr, s - size + 1, size + 1);
				return (ptr);
			}
			s++;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t nb_words;

	if (!s)
		return (0);
	nb_words = get_word_count(s, c);
	ptr = (char **)malloc(sizeof(char *) * nb_words + 1);
	if (!ptr)
		return (0);
	i = 0;
	while (*s == c)
		s++;
	while (i < nb_words)
	{
		ptr[i] = split_main(s, c);
		s += ft_strlen(ptr[i]) + 1;
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}

/*
int main(void)
{
	char str[] = "Bonjour je m'appel julien bernard";
	char c = ' ';
	char **ptr = ft_split(str, c);
	return (0);
}
*/