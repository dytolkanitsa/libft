/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarg <lgarg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:12:26 by lgarg             #+#    #+#             */
/*   Updated: 2021/04/22 18:21:40 by lgarg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	ft_size(int n)
{
	unsigned int		size;

	size = 1;
	if (n < 0)
	{
		n = -n;
		size++;
	}
	while (n / 10 > 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				size;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_size(n);
	str = (char *)malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[size--] = '\0';
	while (n / 10 > 0)
	{
		str[size] = (n % 10) + '0';
		n = n / 10;
		size--;
	}
	str[size] = n + '0';
	return (str);
}
