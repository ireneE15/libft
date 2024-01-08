/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:03:01 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/08 10:56:12 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	chara;

	chara = 'a';
	if (ft_isalpha(chara))
	{
		printf("El carácter '%c' es alfabético\n", chara);
	}
	else
	{
		printf("El carácter '%c' no es alfabético\n", chara);
	}
	return (0);
}
*/