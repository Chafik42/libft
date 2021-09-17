/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 22:12:38 by cmarouf           #+#    #+#             */
/*   Updated: 2021/09/11 01:03:22 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	get_size(char const *s1, char const *set)
{
	int	i;
	int	size;

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
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = malloc(sizeof(char) * (get_size(s1, set)) + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		if (is_set(s1[i], set) == 0)
		{
			str[j] = s1[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
