/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:44:57 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/11 13:47:41 by iescalon         ###   ########.fr       */
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
	len = ft_strlen(s);
	while (counter < (int)len)
	{
		counter++;
		s++;
	}
	while (counter >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
		counter--;
	}
	return (NULL);
}

/*
int main(void)
{
    const char *string = ((void *)0);
    char chara = '\0';

    char *result = strrchr(string, chara);

    if (result != NULL) {
        printf("Última '%c' en la pos.: %ld\n", chara, result - string);
    } else {
        printf("'%c' no encontrado en la cadena.\n", chara);
    }
    return 0;
}
*/
