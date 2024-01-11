/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:02:23 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/11 10:40:43 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((str1[i] != '\0' || str2[i] != '\0') && (i < n))
	{
		if (str1[i] < str2[i])
		{
			return (str1[i] - str2[i]);
		}
		else if (str1[i] > str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
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
