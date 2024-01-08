/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:18:52 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/08 13:49:51 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		((unsigned char *)s)[count] = 0;
		count++;
	}
}
/*
int	main(void)
{
	char	mensaje[5] = "Hola";
	size_t	bytes_a_cero;

	bytes_a_cero = 1;
	printf("Antes de bzero: %s\n", mensaje);
	ft_bzero(mensaje, bytes_a_cero);
	printf("Después de bzero: %s\n", mensaje);
	return (0);
}
*/