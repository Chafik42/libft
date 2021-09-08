/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 22:30:07 by cmarouf           #+#    #+#             */
/*   Updated: 2021/09/08 23:14:10 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t				*str;
	long unsigned int	i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = 0;
	str = malloc(sizeof(size) * (nmemb + 1));
	while (str[i])
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
