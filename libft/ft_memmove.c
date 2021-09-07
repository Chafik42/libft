/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:52:43 by cmarouf           #+#    #+#             */
/*   Updated: 2021/09/07 18:00:37 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	long unsigned int		i;
	unsigned char 		*dest1;
	const unsigned char *src1;

	dest1 = dest;
	src1 = src;
	i = 0;
	if (dest1 < src1)
	{
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	if (dest1 > src1)
	{
		i = n;
		while (i)
		{
			dest1[i] = src1[i];
			i--;
		}
	}
	return (dest1);
}

int	main(void)
{
	char	dest[] = "mdrrr";
	char	src[] = "ptdrr";
	printf("%s\n", dest);
	ft_memmove(dest, src, 6 * sizeof(char));
	printf("%s\n", dest);
	return (0);
}
