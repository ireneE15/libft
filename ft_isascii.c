/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:41:19 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/11 11:32:43 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
	if (ft_isascii(chara))
	{
		printf("El valor ASCII de '%c' es un valor de ASCII válido\n", chara);
	}
	else
	{
		printf("El valor ASCII de '%c' no es un valor de ASCII válido\n", chara);
	}
	return (0);
}
*/
