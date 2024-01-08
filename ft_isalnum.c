/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:30:08 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/08 12:26:39 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isalnum(char c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
	int	chara;

	chara = '%';
	if (ft_isalnum(chara))
	{
		printf("El carácter '%c' es alfanumérico\n", chara);
	}
	else
	{
		printf("El carácter '%c' no es alfanumérico\n", chara);
	}
	return (0);
}
*/