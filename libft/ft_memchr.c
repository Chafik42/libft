/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 21:08:41 by cmarouf           #+#    #+#             */
/*   Updated: 2021/09/07 23:15:19 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	long unsigned int	i;
	unsigned char *str;

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

int main(void)
{
	char    str[16] = "https://LOL.com";
	printf("%s\n", str);
	printf("%s\n", (char *)ft_memchr(str, 'L', 16 * sizeof(char)));
	return (0);
}

