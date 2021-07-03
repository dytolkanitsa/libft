/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarg <lgarg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 19:37:34 by lgarg             #+#    #+#             */
/*   Updated: 2021/04/20 12:47:55 by lgarg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	unsigned char	chr;
	unsigned char	*dst;
	unsigned char	*src;
	size_t			i;

	i = 0;
	chr = (char)c;
	dst = (unsigned char *)destination;
	src = (unsigned char *)source;
	while (i < n)
	{
		dst[i] = src[i];
		if (dst[i] == chr)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
