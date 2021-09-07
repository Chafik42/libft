/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 23:19:33 by cmarouf           #+#    #+#             */
/*   Updated: 2021/09/07 23:44:57 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	long unsigned int i;
	unsigned char *str1;
	unsigned char *str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char) str2[i]);
		i++;
	}
	return ((unsigned char)str1[i] - (unsigned char) str2[i]);
}

int	main(void)
{
	char s1[] = "Tost1";
	char s2[] = "Test1";

	printf("%d\n", ft_memcmp(s1, s2, 5 * sizeof(char)));
}
