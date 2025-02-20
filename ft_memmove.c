/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfurnea <rfurnea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 02:55:19 by rfurnea           #+#    #+#             */
/*   Updated: 2025/02/11 07:07:05 by rfurnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*bdest;
	const unsigned char	*bsrc;

	bdest = dest;
	bsrc = src;
	if (src == NULL && dest == NULL)
		return (NULL);
	if (bdest < bsrc)
	{
		while (n--)
			*bdest++ = *bsrc++;
	}
	else
	{
		while (n--)
			bdest[n] = bsrc[n];
	}
	return (dest);
}
