/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:44:30 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/10 14:35:29 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_lon;
	size_t	src_lon;
	size_t	i;

	i = 0;
	src_lon = ft_strlen(src);
	dest_lon = ft_strlen(dest);
	if (size == 0 || size <= dest_lon)
	{
		return (size + src_lon);
	}
	while (i < (size - dest_lon - 1) && src[i])
	{
		dest[dest_lon + i] = src[i];
		i++;
	}
	dest[dest_lon + i] = '\0';
	return (dest_lon + src_lon);
}
/*
int main(void) 
{
    char destination[20] = "Hola, ";
    const char *source = "Mundo!";
    size_t destination_size = sizeof(destination);
	
    size_t result = ft_strlcat(destination, source, destination_size);

    printf("Resultado: %s\n", destination);
    printf("Longitud total: %zu\n", result);

    return 0;
}
*/
