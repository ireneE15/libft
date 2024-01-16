/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:47:47 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/16 14:10:24 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (!new_list)
	{
		return (NULL);
	}
	new_list -> content = content;
	new_list -> next = NULL;
	return (new_list);
}
/*
int	main(void)
{
    t_list *list = ft_lstnew("Hola");
    if (list != NULL)
	{
        printf("Contenido de la lista: %s\n", (char *)list->content);
    }
	else
	{
        printf("Fallo al crear la lista\n");
    }
    free(list);
    return (0);
}
*/
