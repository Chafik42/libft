/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 21:06:34 by cmarouf           #+#    #+#             */
/*   Updated: 2021/09/07 21:08:17 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(char	*s1,	char	*s2, unsigned int	n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
