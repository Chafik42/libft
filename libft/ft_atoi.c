/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:46:17 by cmarouf           #+#    #+#             */
/*   Updated: 2021/09/08 22:16:56 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char i)
{
	if (i >= '0' && i <= '9')
		return (1);
	if (i == '+' || i == '-')
		return (2);
	if ((i >= 9 && i <= 13) || i == ' ')
		return (3);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nbr;
	int	sign;

	i = 0;
	sign = 1;
	nbr = 0;
	while (check(nptr[i]) == 3)
		i++;
	if (check(nptr[i]) == 2)
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (check(nptr[i]) == 1)
	{
		nbr = nbr * 10 + nptr[i] - 48;
		i++;
	}
	return (nbr * sign);
}

#include <stdio.h>
int	main(void)
{
	char str[] = "2147483647";
	int	intatoi;

	intatoi = ft_atoi(str);
	printf("%d\n", intatoi);
	return (0);
}
