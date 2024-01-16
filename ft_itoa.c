/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:41:47 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/16 10:28:03 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int	count(int a)
{
	int	i;

	i = 1;
	while (a / 10 != 0)
	{
		i++;
		a = a / 10;
	}
	if (a < 0)
	{
		i = i + 1;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*strnum;
	int		counter;
	int		str_len;
	long	nb;

	nb = n;
	str_len = count(nb);
	strnum = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!(strnum))
		return (NULL);
	strnum[str_len] = '\0';
	counter = 0;
	if (nb < 0)
	{
		strnum[counter] = '-';
		nb = nb * -1;
	}
	if (nb == 0)
		strnum[0] = '0';
	while (nb > 0)
	{
		strnum[str_len - counter++ -1] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (strnum);
}
/*
int main(void)
{
    int numero = 12345;
    char *cadena = ft_itoa(numero);

    if (cadena) 
	{
        printf("Número: %d\nCadena: %s\n", numero, cadena);
        free(cadena);
    }
	else
	{
        printf("Error al asignar memoria.\n");
    }
    return (0);
}
*/
