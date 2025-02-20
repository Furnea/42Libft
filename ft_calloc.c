/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfurnea <rfurnea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:22:55 by rfurnea           #+#    #+#             */
/*   Updated: 2025/02/06 06:02:38 by rfurnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*s;

	if ((nmemb * size) == 0)
	{
		s = malloc(0);
		return (s);
	}
	s = (unsigned char *)malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, (nmemb * size));
	return (s);
}
