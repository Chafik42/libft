/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:37:42 by cmarouf           #+#    #+#             */
/*   Updated: 2021/09/07 18:41:46 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	p;
	unsigned int	temp;

	p = ft_strlen(str);
	j = ft_strlen(dest);
	temp = j;
	i = 0;
	if (j > size)
		return (j + size);
	while (src[i] != '\0' && temp < size - 1)
	{
		dest[temp] = src[i];
		temp++;
		i++;
	}
	dest[temp] = '\0';
	return (p + j);
}