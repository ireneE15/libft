/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:11:07 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/10 14:35:43 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	else
	{
		return (c);
	}
}
/*
int	main(void)
{
	char	mayu = 'a';
	char	minu = ft_tolower(mayu);

	printf("Letra original: %c\n", mayu);
	printf("Letra convertida a minúscula: %c\n", minu);
	return (0);
}
*/
