/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:44:57 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/10 14:35:42 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;
	size_t	len;
	int		counter;

	s = (char *)str;
	counter = 0;
	if (s)
	{
		len = ft_strlen(s);
		while (counter < (int)len)
		{
			counter++;
			s++;
		}
		while (counter >= 0)
		{
			if (s[0] == (char)c)
				return (s);
			s--;
			counter--;
		}
	}
	return (NULL);
}
/*
int main(void)
{
    const char *string = "Hola, mundo!";
    char chara = 'o';
    char *result = ft_strrchr(string, chara);

    if (result != NULL)
	{
        printf("'%c' últ. vez encon. en pos. %ld.\n", chara, result - string);
	}
	else 
	{
        printf("El carácter '%c' no fue encontrado en la cadena.\n", chara);
    }

    return (0);
}
*/
