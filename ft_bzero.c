/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfurnea <rfurnea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:17:19 by rfurnea           #+#    #+#             */
/*   Updated: 2025/02/06 06:20:52 by rfurnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t size)
{
	unsigned char	*sb;

	sb = (unsigned char *)s;
	while (size--)
		*sb++ = 0;
}
