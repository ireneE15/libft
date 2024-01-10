/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:00:21 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/10 14:35:39 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// haystack: Puntero a la cadena en la que se realizará la búsqueda.
// needle: Puntero a la subcadena que se está buscando.
// len: Número máximo de caracteres a examinar.

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
    const char *string = "Hola, mundo!";
    const char *substring = "Ho";
    size_t lon = 13;

    char *result = ft_strnstr(string, substring, lon);

    if (result != NULL)
	{
        printf("Substr encontrada en pos. %ld: %s\n", result - string, result);
    }
	else
	{
        printf("Substr no encontrada en los primeros %zu caracteres.\n", lon);
    }
    return (0);
}
*/
