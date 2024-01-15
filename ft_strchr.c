/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:19:04 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/15 11:35:36 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return ((char *)str);
}

/*
int main(void)
{
    const char *string = "Hola, mundo!";
    char chara = 'H';
    char *result = ft_strchr(string, chara);

    if (result != NULL)
	{
        printf("'%c' encontrado en la posición %ld.\n", chara, result - string);
	}
	else 
	{
        printf("El carácter '%c' no fue encontrado en la cadena.\n", chara);
    }

    return (0);
}
*/
