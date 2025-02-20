/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfurnea <rfurnea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 02:31:26 by rfurnea           #+#    #+#             */
/*   Updated: 2025/02/11 20:49:53 by rfurnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi( char const *s, char (*f) (unsigned int, char))
{
	char			*ns;
	unsigned int	i;

	i = 0;
	ns = (char *)malloc((ft_strlen(s) + 1) *(sizeof(char)));
	if (!ns)
		return (NULL);
	while (s[i] != '\0')
	{
		ns[i] = f(i, s[i]);
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
