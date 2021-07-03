/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarg <lgarg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 15:42:00 by lgarg             #+#    #+#             */
/*   Updated: 2021/04/22 20:49:24 by lgarg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lenght_l;

	lenght_l = ft_strlen(little);
	if (lenght_l == 0)
		return ((char *)big);
	while (len >= lenght_l)
	{
		if (*big == *little && (ft_strncmp(big, little, lenght_l) == 0))
			return ((char *)big);
		big++;
		len--;
	}
	return (0);
}
