/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarg <lgarg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 17:37:46 by lgarg             #+#    #+#             */
/*   Updated: 2021/04/19 21:20:27 by lgarg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *memptr1, const void *memptr2, size_t num)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	if (num == 0)
		return (0);
	str1 = (unsigned char *)memptr1;
	str2 = (unsigned char *)memptr2;
	while (i < num - 1 && *str1 == *str2)
	{
		str1++;
		str2++;
		i++;
	}
	return (*str1 - *str2);
}
