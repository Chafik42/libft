/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 22:12:38 by cmarouf           #+#    #+#             */
/*   Updated: 2021/09/09 23:01:41 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	is_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

size_t	get_size(char const *s1, char const *set)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = 0;
	while (s1[i])
	{
		if (is_set(s1[i], set) == 0)
			size++;
		i++;
	}
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*str;

	i = 0;
	j = 0;
	size = get_size(s1, set);
	str = malloc(sizeof(char) * (size) + 1);
	while (s1[i])
	{
		if (is_set(s1[i], set) == 0)
		{
			str[j] = s1[i];
			j++;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
