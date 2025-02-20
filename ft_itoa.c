/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfurnea <rfurnea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:33:41 by rfurnea           #+#    #+#             */
/*   Updated: 2025/02/06 08:57:14 by rfurnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_count(int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * (-1);
		counter++;
	}
	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char		*s;
	int			size;
	long int	nbr;

	size = ft_count(n);
	s = (char *)malloc(size + 1);
	nbr = n;
	if (!s)
		return (0);
	if (nbr < 0)
	{
		s[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		s[0] = '0';
	s[size--] = '\0';
	while (nbr)
	{
		s[size] = (nbr % 10) + '0';
		nbr = nbr / 10;
		size--;
	}
	return (s);
}
