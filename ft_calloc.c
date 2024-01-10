/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:08:13 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/10 14:34:51 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// count: Número de elementos que se asignarán en el bloque de memoria.
// size: Tamaño en bytes de cada elemento.

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	size_t	i;

	i = 0;
	memory = malloc(count * size);
	if (memory == NULL)
	{
		return (0);
	}
	while (i < count * size)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}
/*
int main(void)
{
    size_t num_elementos = 5;
    size_t tamano_elemento = sizeof(int);

    int *array = (int *)ft_calloc(num_elementos, tamano_elemento);

    if (array != NULL)
	{
        size_t i = 0;
        while (i < num_elementos) 
		{
            printf("%d ", array[i]);
            i++;
        }

        free(array);
    }
	else
	{
        printf("Error en la asignación de memoria.\n");
    }
    return (0);
}
*/
