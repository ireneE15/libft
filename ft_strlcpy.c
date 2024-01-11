/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:42:13 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/11 10:46:11 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;

	if (size)
	{
		i = 0;
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (ft_strlen(src));
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
