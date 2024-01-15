/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:05:49 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/15 10:11:40 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;
	char	*exit;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	len = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (start == len + 1)
	{
		exit = malloc(1);
		if (exit == NULL)
			return (NULL);
		*exit = '\0';
		return (exit);
	}
	while (ft_strchr(set, s1[len]))
		len --;
	exit = ft_substr(s1, start, len - start + 1);
	if (!exit)
		return (NULL);
	return (exit);
}
/*
int main(void)
{
    const char *original = "   Hola, mundo!   ";
    const char *set = " ";

    char *ft = ft_strtrim(original, set);

    printf("Cadena original: \"%s\"\n", original);
    printf("Conjunto de caracteres a eliminar: \"%s\"\n", set);
    printf("Cadena después de eliminar caracteres: \"%s\"\n", ft);

    free(ft);
    return (0);
}
*/
