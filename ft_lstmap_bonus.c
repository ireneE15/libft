/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:04:20 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/19 09:49:35 by iescalon         ###   ########.fr       */
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
/*
void	*double_content(void *content)
{
	int	*value;
	int	*doubled;

	value = (int *)content;
	doubled = (int *)malloc(sizeof(int));
	if (!doubled)
		return (NULL);
	*doubled = (*value) * 2;
	return (doubled);
}

int	main(void)
{
	t_list	*lst = ft_lstnew((void *)malloc(sizeof(int)));
	*((int *)lst->content) = 5;
	ft_lstadd_back(&lst, ft_lstnew((void *)malloc(sizeof(int))));
	*((int *)(lst->next->content)) = 10;
	ft_lstadd_back(&lst, ft_lstnew((void *)malloc(sizeof(int))));
	*((int *)(lst->next->next->content)) = 15;

	t_list *mapped_list = ft_lstmap(lst, &double_content, &free);
	while (mapped_list)
	{
		printf("%d\n", *((int *)mapped_list->content));
		t_list *temp = mapped_list;
		mapped_list = mapped_list->next;
		free(temp->content);
		free(temp);
	}
	ft_lstclear(&lst, &free);
	ft_lstclear(&mapped_list, &free);
	return (0);
}
*/
