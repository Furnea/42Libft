/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfurnea <rfurnea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 01:10:07 by rfurnea           #+#    #+#             */
/*   Updated: 2025/02/11 19:11:28 by rfurnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*bdest;
	unsigned char	*bsrc;
	size_t			i;

	bdest = (unsigned char *)dest;
	bsrc = (unsigned char *)src;
	i = 0;
	if (src == NULL && dest == NULL)
		return (NULL);
	while (i < n)
	{
		*(bdest + i) = *(bsrc + i);
		i++;
	}
	return (dest);
}
