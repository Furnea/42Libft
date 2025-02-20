/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfurnea <rfurnea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 02:29:05 by rfurnea           #+#    #+#             */
/*   Updated: 2025/02/06 07:25:22 by rfurnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void*s2, size_t n)
{
	unsigned char	*bs1;
	unsigned char	*bs2;
	unsigned int	i;

	bs1 = (unsigned char *)s1;
	bs2 = (unsigned char *)s2;
	i = 0;
	while (n--)
	{
		if (bs1[i] != bs2[i])
			return ((unsigned char)bs1[i] - (unsigned char)bs2[i]);
		i++;
	}
	return (0);
}
