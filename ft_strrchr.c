/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarg <lgarg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:07:39 by lgarg             #+#    #+#             */
/*   Updated: 2021/04/19 18:36:12 by lgarg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*res;
	int		i;

	i = 0;
	res = NULL;
	while (str[i])
	{
		if (str[i] == (char)ch)
			res = (char *)str + i;
		i++;
	}
	if (str[i] == '\0' && (char)ch == '\0')
		res = (char *)str + i;
	return (res);
}
