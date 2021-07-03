/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarg <lgarg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 10:37:30 by lgarg             #+#    #+#             */
/*   Updated: 2021/04/22 13:40:11 by lgarg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strdup(const char *str)
{
	int		lenght;
	char	*dest;

	lenght = ft_strlen(str);
	dest = (char *)malloc((lenght + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (lenght >= 0)
	{
		dest[lenght] = str[lenght];
		lenght--;
	}
	lenght = ft_strlen(str);
	dest[lenght++] = '\0';
	return (dest);
}
