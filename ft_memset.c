/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:23:29 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/08 13:16:32 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	count;

	count = 0;
	while (count < len)
	{
		((unsigned char *)b)[count] = (unsigned char)c;
		count++;
	}
	return (b);
}
/*
int	main(void)
{
	size_t	block_size;
	char	buffer[10];
	int		fill_value;
	size_t	i;

	block_size = 10;
	fill_value = '!';
	ft_memset(buffer, fill_value, block_size);
	printf("Contenido del bloque de memoria: ");
	i = 0;
	while (i < block_size)
	{
		printf("%c ", buffer[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/