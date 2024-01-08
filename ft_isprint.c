/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:59:48 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/08 12:26:57 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isprint(char c)
{
	if (c >= 32 && c <= 126)
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
	char	chara;
	
	chara = '\0';
	if (ft_isprint(chara))
	{
		printf("El carácter '%c' es imprimible\n", chara);
	}
	else
	{
		printf("El carácter '%c' no es imprimible\n", chara);
	}
	return (0);
}
*/