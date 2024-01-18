/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:04:20 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/18 10:33:15 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*new_list;
	t_list	*new_node;

	new_list = NULL;
	while (lst)
	{
		map = f(lst -> content);
		new_node = ft_lstnew(map);
		if (!new_node)
		{
			if (map)
			{
				del(map);
				ft_lstclear(&new_list, (*del));
				return (0);
			}
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst -> next;
	}
	return (new_list);
}
