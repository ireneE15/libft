/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:44:30 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/09 12:16:30 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	strlen(char *str)
{
	int	i;
	
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(const char *src, char *dest, size_t size)
{
	size_t	src_lon;
	size_t	dest_lon;
	size_t	total_lon;

	src_lon = strlen(src);
	dest_lon = strlen(dest);
	total_lon = src_lon + dest_lon
}