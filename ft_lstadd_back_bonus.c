/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:17:59 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/17 12:30:56 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		temp = *lst;
		while (temp -> next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = new;
	}
}
/*
int	main(void)
{
	t_list	*first = ft_lstnew((void *)1);
	t_list	*second = ft_lstnew((void *)2);
	t_list	*third = ft_lstnew((void *)3);
	t_list	*list;
	t_list	*temp;

	list = NULL;
	ft_lstadd_back(&list, first);
	ft_lstadd_back(&list, second);
	ft_lstadd_back(&list, third);
	temp = list;
	while (temp != NULL)
	{
		printf("%d -> ", (int)temp->content);
		 temp = temp->next;
	}
	printf("NULL\n");
    free(first);
    free(second);
    free(third);
    return (0);
}
*/
