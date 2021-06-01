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

static size_t get_word_cnt(char const *str, char c)
{
	size_t cnt;

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


char **ft_split(char const *s, char c)
{
	
}