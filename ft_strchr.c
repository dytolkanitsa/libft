/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarg <lgarg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 13:30:51 by lgarg             #+#    #+#             */
/*   Updated: 2021/04/22 19:36:58 by lgarg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *string, int symbol)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == (char)symbol)
			return ((char *)string + i);
		i++;
	}
	if ((char)symbol == '\0')
		return ((char *)string + i);
	return (NULL);
}
