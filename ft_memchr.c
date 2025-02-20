/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfurnea <rfurnea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 02:04:52 by rfurnea           #+#    #+#             */
/*   Updated: 2025/02/06 07:22:47 by rfurnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*bs;
	unsigned char	bc;
	unsigned int	i;

	bs = (unsigned char *)s;
	bc = (unsigned char)c;
	i = 0;
	while (n--)
	{
		if (bs[i] == bc)
			return (&bs[i]);
		i++;
	}
	return (NULL);
}
