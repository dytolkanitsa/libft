/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarg <lgarg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 10:49:27 by lgarg             #+#    #+#             */
/*   Updated: 2021/04/22 18:05:53 by lgarg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	unsigned char	*str;

	str = (unsigned char *)malloc(number * size);
	if (str == NULL)
		return (NULL);
	if (str != NULL && (number * size) != 0)
		ft_bzero(str, number * size);
	return (str);
}
