/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:41:27 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/10 14:35:02 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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

	chara = 'a';
	if (ft_isdigit(chara))
	{
		printf("El carácter '%c' es numérico\n", chara);
	}
	else
	{
		printf("El carácter '%c' no es numérico\n", chara);
	}
	return (0);
}
*/
