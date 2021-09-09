/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 00:35:45 by cmarouf           #+#    #+#             */
/*   Updated: 2021/09/10 01:05:49 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	putnbstr(char *str, int n, int i)
{
	if (n == 0)
	{
		str = malloc(1);
		str[0] = '0';
		return ;
	}
	i--;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		str[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	int		i;
	int		nbr;
	char	*str;

	if (n == -2147483648)
		return ("-2147483468");
	i = 0;
	nbr = n;
	if (nbr < 0)
	{
		i++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	str = malloc(sizeof(char) * (i + 1));
	if (n < 0)
		str[0] = '-';
	str[i] = '\0';
	putnbstr(str, n, i);
	return (str);
}
