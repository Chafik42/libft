/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:09:42 by cmarouf           #+#    #+#             */
/*   Updated: 2021/09/07 15:46:01 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	long unsigned int	i;
	unsigned char *str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	int	i;
	int	tab[5] = {1, 2, 3, 4, 5};
	i = 0;
	while (i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	ft_memset(tab, 0, 5 * sizeof(int));
	i = 0;
	while (i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}*/
