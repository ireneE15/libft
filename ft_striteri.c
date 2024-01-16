/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:15:31 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/16 11:33:55 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s != NULL && f != NULL)
	{
		i = ft_strlen(s);
		while (j < i)
		{
			(*f)(j, s);
			s++;
			j++;
		}
	}
}
/*
void imprimir_caracter_con_indice(unsigned int indice, char *caracter)
{
    printf("Carácter en posición %u: %c\n", indice, *caracter);
}

int main(void)
{
    char cadena[] = "Hola";

    ft_striteri(cadena, imprimir_caracter_con_indice);
    return (0);
}
*/
