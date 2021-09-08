/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 21:08:41 by cmarouf           #+#    #+#             */
/*   Updated: 2021/09/08 23:28:29 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	long unsigned int	i;
	unsigned char		*str;

	str = (unsigned char *)s;
	i = 0;
	if (str == NULL)
		return (NULL);
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)&str[i]);
		i++;
	}
	if (str[i] == c)
		return ((void *)&str[i]);
	return (0);
}
