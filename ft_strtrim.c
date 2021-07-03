/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarg <lgarg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 20:32:52 by lgarg             #+#    #+#             */
/*   Updated: 2021/04/21 17:37:26 by lgarg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char static	ft_check(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, const char *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	int		i;

	if (!s || !set)
		return (NULL);
	start = 0;
	i = 0;
	end = ft_strlen(s);
	while (s[start] != '\0' && ft_check(s[start], set))
		start++;
	while (end > start && ft_check(s[end - 1], set))
		end--;
	if (start == 0 && end == ft_strlen(s))
		return (ft_strdup(s));
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (str == NULL)
		return (NULL);
	while (end > start)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
