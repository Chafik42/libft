/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 19:15:14 by cmarouf           #+#    #+#             */
/*   Updated: 2021/09/07 20:36:44 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
char	*ft_strchr(const char *s, int c)
{

	int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[16] = "https://LOL.com";
	printf("%s\n", ft_strchr(str, 'L'));
	return (0);
}








