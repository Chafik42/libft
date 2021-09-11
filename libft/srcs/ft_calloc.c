/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 22:30:07 by cmarouf           #+#    #+#             */
/*   Updated: 2021/09/11 03:30:40 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t				*str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc((size) * (nmemb));
	if (!str)
		return (NULL);
	ft_bzero(str, size * nmemb);
	return (str);
}
