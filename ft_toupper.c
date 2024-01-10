/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 09:55:46 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/10 14:35:46 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a' && c <= 'z'))
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}
/*
int	main(void)
{
	char	minu = 'a';
	char	mayu = ft_toupper(minu);

	printf("Letra original: %c\n", minu);
	printf("Letra convertida a mayúscula: %c\n", mayu);
	return (0);
}
*/
