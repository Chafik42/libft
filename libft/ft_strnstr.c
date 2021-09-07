/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 23:46:01 by cmarouf           #+#    #+#             */
/*   Updated: 2021/09/08 00:22:12 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	long unsigned int	i;
	int					j;
	int					p;

	i = 0;
	if (little[0] == '\0' )
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		p = i;
		while (big[p] == little[j])
		{
			j++;
			p++;
			if (big[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char s1a[18] = "This is OK for now";
	char s2a[2] = "OK";

	printf("%s\n", ft_strnstr(s1a, s2a, 3));
}
