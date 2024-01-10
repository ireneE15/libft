/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:42:13 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/10 14:35:32 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(const char *src, char *dest, size_t size)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = ft_strlen(src);
	if (src == NULL || dest == NULL || size == 0)
	{
		return (0);
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}
/*
int	main(void)
{
	const char	*source = "Hola";
	char		destination[20];

	size_t		lon_cpy = ft_strlcpy(source, destination, sizeof(destination));

	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);
	printf("Copied Length: %zu\n", lon_cpy);
}
*/
