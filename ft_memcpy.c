/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarg <lgarg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 19:24:41 by lgarg             #+#    #+#             */
/*   Updated: 2021/04/19 20:23:47 by lgarg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	if (destination == NULL && source == NULL)
		return (NULL);
	i = 0;
	dst = (unsigned char *)destination;
	src = (unsigned char *)source;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
