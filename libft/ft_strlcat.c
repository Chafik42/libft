/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:37:42 by cmarouf           #+#    #+#             */
/*   Updated: 2021/09/08 23:59:41 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	size_t			j;
	size_t			p;
	size_t			temp;

	p = ft_strlen(src);
	j = ft_strlen(dst);
	temp = j;
	i = 0;
	if (j > size)
		return (j + size);
	while (src[i] != '\0' && temp < size - 1)
	{
		dst[temp] = src[i];
		temp++;
		i++;
	}
	dst[temp] = '\0';
	return (p + j);
}
