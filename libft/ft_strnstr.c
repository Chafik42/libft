/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 23:46:01 by cmarouf           #+#    #+#             */
/*   Updated: 2021/09/08 21:45:09 by cmarouf          ###   ########.fr       */
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
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return ("\0");
}
/*int	main(int ac, char **av)
{
	(void) ac;
	if (ac == 3)
		printf("%s\n", ft_strnstr(av[1], av[2], 16));
	return (0);
}*/
