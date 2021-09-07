/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 20:40:00 by cmarouf           #+#    #+#             */
/*   Updated: 2021/09/07 21:05:57 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int	j;

	j = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[j])
		j++;
	while (s[i])
	{
		if (s[j] == c)
			return ((char *)&s[j]);
		i++;
		j--;
	}
	if (s[j] == c)
		return ((char *)&s[j]);
	return (NULL);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char    str[16] = "https://LOL.com";
	printf("%s\n", ft_strrchr(str, 't'));
	return (0);
}
