/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:40:10 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/16 11:11:03 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char convertir_a_mayusculas(unsigned int indice, char c)
{
    if (c >= 'a' && c <= 'z')
	{
        return ((char)(c - ('a' - 'A')));
    } 
	else
	{
        return (c);
    }
}

int main(void)
{
    const char *str_orig = "hola mundo";
    char *str_mod = ft_strmapi(str_orig, convertir_a_mayusculas);

    if (cadena_modificada)
	{
        printf("Original: %s\nModificado: %s\n", str_orig, str_mod);
        free(str_mod);
    }
	else
	{
        printf("Error al asignar memoria.\n");
    }
    return (0);
}
*/
