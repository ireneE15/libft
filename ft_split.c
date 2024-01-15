/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:47:29 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/15 13:32:20 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	size_t	i;

	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}
/*
int main(void)
{
    const char *input_string = "Hola,mundo,esto,es,una,prueba";
    char delimiter = ',';
    char **result = ft_split(input_string, delimiter);
    if (result == NULL) {
        fprintf(stderr, "Error al dividir la cadena\n");
        return EXIT_FAILURE;
    }
    int i = 0;
    while (result[i] != NULL) 
	{
        printf("Palabra %d: %s\n", i + 1, result[i]);
        i++;
    }
    i = 0;
    while (result[i] != NULL) 
	{
        free(result[i]);
        i++;
    }
    free(result);
    return (EXIT_SUCCESS);
}
*/
