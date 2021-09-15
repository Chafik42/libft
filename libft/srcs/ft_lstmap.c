/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:30:29 by cmarouf           #+#    #+#             */
/*   Updated: 2021/09/16 01:45:05 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void*(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*nelem;

	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		nelem = ft_lstnew((*f)(lst->content));
		if (nelem == NULL)
		{
			ft_lstclear(&nlst, (*del));
			return (NULL);
		}
		ft_lstadd_front(&nlst, nelem);
		lst = lst->next;
	}
	return (nlst);
}
