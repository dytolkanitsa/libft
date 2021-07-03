/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarg <lgarg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 17:04:52 by lgarg             #+#    #+#             */
/*   Updated: 2021/04/21 15:30:31 by lgarg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_s;
	size_t	len_d;

	len_d = 0;
	len_s = ft_strlen(src);
	while (dst[len_d] && len_d < dstsize)
		len_d++;
	if (len_d == dstsize)
		return (dstsize + len_s);
	if (len_s < dstsize - len_d)
	{
		ft_memcpy(dst + len_d, src, len_s + 1);
	}
	else
	{
		ft_memcpy(dst + len_d, src, dstsize - len_d - 1);
		dst[dstsize - 1] = '\0';
	}
	return (len_d + len_s);
}
