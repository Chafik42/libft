/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:42:41 by cmarouf           #+#    #+#             */
/*   Updated: 2021/09/07 19:12:43 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int	i;
	char	str[10] = "AaAaAaAaAa";
	i = 0;
	printf("%s\n", str);
	while (str[i])
	{
		printf("%c\n", ft_toupper(str[i]));
		i++;
	}
	return (0);
}*/
