/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarg <lgarg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:46:06 by lgarg             #+#    #+#             */
/*   Updated: 2021/04/21 17:36:12 by lgarg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	unsigned const char	*src;

	i = 0;
	dst = (unsigned char *)destination;
	src = (unsigned const char *)source;
	if (dst < src)
	{
		while (i < n)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else if (dst > src)
	{
		while (n--)
			dst[n] = src[n];
	}
	return (dst);
}
