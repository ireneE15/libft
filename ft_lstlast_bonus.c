/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:04:54 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/17 12:09:49 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst -> next != NULL)
		{
			lst = lst -> next;
		}
	}
	return (lst);
}
/*
int	main(void)
{
	t_list *first = ft_lstnew((void *)1);
	t_list *second = ft_lstnew((void *)8);
	t_list	*last;

	first->next = second;
	second->next = NULL;
	last = ft_lstlast(first);
	printf("%d\n", (int)last->content);
	free(first);
	free(second);
	return (0);
}
*/
