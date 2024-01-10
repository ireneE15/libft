/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:49:46 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/10 14:34:44 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	long			result;
	int				sign;
	unsigned int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}
/*
int main(void)
{
    const char *cadena1 = "  12345";
    const char *cadena2 = "  -9876";
    const char *cadena3 = "  +42";
    const char *cadena4 = "  abc123";

    int numero1 = ft_atoi(cadena1);
    int numero2 = ft_atoi(cadena2);
    int numero3 = ft_atoi(cadena3);
    int numero4 = ft_atoi(cadena4);

    printf("Número 1: %d\n", numero1);
    printf("Número 2: %d\n", numero2);
    printf("Número 3: %d\n", numero3);
    
    if (numero4 == 0)
	{
        printf("Cadena 4 no es un número válido.\n");
    }
	else
	{
        printf("Número 4: %d\n", numero4);
    }
    return (0);
}
*/
