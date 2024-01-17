/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:35:54 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/17 10:58:55 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new -> next = *lst;
		*lst = new;
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
	ft_lstadd_front(&list, first);
	ft_lstadd_front(&list, second);
	ft_lstadd_front(&list, third);
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
