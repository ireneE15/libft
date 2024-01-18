/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:55:56 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/18 10:00:29 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst -> content);
			lst = lst -> next;
		}
	}
}
/*
void print_int(void *content)
{
    printf("%d\n", *(int *)content);
}

int main(void) 
{
	t_list *first = ft_lstnew((void *)1);
	t_list *second = ft_lstnew((void *)2);
    int *number1 = malloc(sizeof(int));
	int *number2 = malloc(sizeof(int));

    *number1 = 42;
	*number2 = 100;
    first->content = number1;
    first->next = second;
	second->content = number2;
	second->next = NULL;
    ft_lstiter(first, print_int);
    return (0);
}
*/
