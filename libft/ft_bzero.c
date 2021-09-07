/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:46:43 by cmarouf           #+#    #+#             */
/*   Updated: 2021/09/07 16:20:38 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void	ft_bzero(void *s, size_t n)
{
	long unsigned int i;
	unsigned char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

/*int	main(void)
{
	char	str[21] = "lol mdr xptdr lolmdr";
	
	printf("%s\n", str);
	ft_bzero(str, 21 * sizeof(char));	
	printf("%s\n", str);
	return (0);
}*/
