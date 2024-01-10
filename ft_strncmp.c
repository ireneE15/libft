/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:02:23 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/10 14:35:37 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!(s1) || !(s2))
	{
		return (0);
	}
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && ((i + 1) < n))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main(void)
{
    const char *cadena1 = "Hola";
    const char *cadena2 = "Hola, mundo!";
    size_t n = 4;

    int resultado = ft_strncmp(cadena1, cadena2, n);

    if (resultado == 0) {
        printf("Las primeras %zu letras son iguales.\n", n);
    } else if (resultado < 0)
	{
        printf("La primera cadena es menor.\n");
    }
	else 
	{
        printf("La primera cadena es mayor.\n");
    }
    return (0);
}
*/
