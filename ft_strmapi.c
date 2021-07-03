/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarg <lgarg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 13:55:08 by lgarg             #+#    #+#             */
/*   Updated: 2021/04/21 15:49:14 by lgarg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	size_t				lenght;
	char				*res;
	unsigned long int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	lenght = ft_strlen(s);
	res = (char *)malloc(lenght + 1);
	if (res == NULL)
		return (NULL);
	while (i < lenght)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[lenght] = '\0';
	return (res);
}
