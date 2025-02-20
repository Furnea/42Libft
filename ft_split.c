/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfurnea <rfurnea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 01:19:54 by rfurnea           #+#    #+#             */
/*   Updated: 2025/02/13 19:45:10 by rfurnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

int	free_malloc(char **str, int p, size_t len)
{
	int	i;

	i = 0;
	str[p] = malloc(len);
	if (!str[p])
	{
		while (i < p)
			free(str[i++]);
		free(str);
		return (1);
	}
	return (0);
}

static int	count(char const *s, char c)
{
	size_t	tokens;
	int		t;

	tokens = 0;
	while (*s)
	{
		t = 1;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			if (t)
			{
				tokens++;
				t = 0;
			}
			s++;
		}
	}
	return (tokens);
}

int	fill_split(char **str, char *s, char c)
{
	size_t	token_len;
	int		i;

	i = 0;
	while (*s)
	{
		token_len = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			token_len++;
			s++;
		}
		if (token_len)
		{
			if (free_malloc(str, i, token_len + 1))
				return (1);
			ft_strlcpy(str[i], (const char *)s - token_len, token_len + 1);
		}
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	tokens;
	char	**str;

	tokens = 0;
	tokens = count(s, c);
	str = malloc((tokens + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str[tokens] = NULL;
	if (fill_split(str, (char *)s, c))
		return (NULL);
	return (str);
}
