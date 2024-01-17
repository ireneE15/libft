/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:45:57 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/17 12:14:01 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst -> next;
	}
	return (i);
}
/*
int	main(void)
{
	t_list *first = ft_lstnew((void *)1);
	t_list *second = ft_lstnew((void *)2);
	int	size;

	first->next = second;
	second->next = NULL;
	size = ft_lstsize(first);
	printf("%d\n", size);
	free(first);
	free(second);
	return (0);
}
*/
