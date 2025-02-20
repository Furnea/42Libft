/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfurnea <rfurnea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 02:48:43 by rfurnea           #+#    #+#             */
/*   Updated: 2025/02/06 06:20:27 by rfurnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *ptr, int c, size_t size)
{
	unsigned int	i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)ptr;
	while (size--)
	{
		s[i] = c;
		i++;
	}
	return (ptr);
}
