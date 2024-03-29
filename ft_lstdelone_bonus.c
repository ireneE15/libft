/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:36:15 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/17 12:42:05 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		if (lst -> content)
		{
			del(lst -> content);
		}
		free (lst);
	}
}
/*
static void del(void *content)
{
	free(content);
}

int main(void) 
{
    t_list *first = ft_lstnew((void *)1);
    int *number = malloc(sizeof(int));

    *number = 42; 
    first->content = number;
    first->next = NULL;
	printf("Antes: %d\n", *(int*)first->content);
    ft_lstdelone(first, del);
	printf("Despues: %d\n", *(int*)first->content);
    return (0);
}
*/
