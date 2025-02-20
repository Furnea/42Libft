/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfurnea <rfurnea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 02:34:04 by rfurnea           #+#    #+#             */
/*   Updated: 2025/02/11 19:13:55 by rfurnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	int				last;
	unsigned char	uc;

	i = 0;
	last = -1;
	uc = (unsigned char)c;
	while (s[i] != '\0')
	{
		if (s[i] == uc)
			last = i;
		i++;
	}
	if (uc == '\0')
		return ((char *)&s[i]);
	if (last != -1)
		return ((char *)&s[last]);
	return (NULL);
}
