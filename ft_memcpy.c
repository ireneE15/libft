/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:53:32 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/09 10:29:44 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*src2;
	unsigned char		*dest2;

	if ((dest == NULL && src == NULL))
	{
		return (dest);
	}
	src2 = (const unsigned char *)src;
	dest2 = (unsigned char *)dest;
	while (n--)
	{
		*dest2++ = *src2++;
	}
	return (dest);
}

int	main(void)
{
	const char	source[] = "Hola, mundo!";
	char		destination[20];

	ft_memcpy(destination, source, 13);
	destination[13] = '\0';
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);
	return (0);
}
