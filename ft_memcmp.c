/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:29:02 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/11 11:09:53 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
/*
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	counter;

	str1 = (char *)s1;
	str2 = (char *)s2;
	if (!s1 || !s2)
	{
		return (0);
	}
	if (n == 0)
	{
		return (0);
	}
	counter = 0;
	while ((str1[counter] == str2[counter]) && (counter + 1 < n))
	{
		counter++;
	}
	return ((str1[counter] - str2[counter]));
}
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1 = s1;
	const unsigned char	*p2 = s2;

	while (n > 0)
	{
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
		n--;
		p1++;
		p2++;
	}
	return (0);
}
/*
int main(void)
{
    const char *cadena1 = "Hola";
    const char *cadena2 = "Holo";
    size_t n = 4;

    int resultado = ft_memcmp(cadena1, cadena2, n);

    if (resultado == 0)
	{
        printf("Los primeros %zu bytes son iguales.\n", n);
    }
	else if (resultado < 0)
	{
        printf("El bloque de memoria apuntado por cadena1 es menor.\n");
    }
	else
	{
        printf("El bloque de memoria apuntado por cadena1 es mayor.\n");
    }
    return (0);
}
*/
