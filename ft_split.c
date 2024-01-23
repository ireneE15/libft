/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:47:29 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/22 13:41:53 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	ft_count_words(char const *s, char c) // numero de palabras
{
	int		subs;
	int		count;

	count = 0;
	subs = 0;
	while (*s)
	{
		if (*s != c && !subs)
		{
			subs = 1;
			count++;
		}
		else if (*s == c)
			subs = 0;
		s++;
	}
	return (count);
}

static size_t	ft_numchar(const char *s, char c) // cuanto mide la palabra
{
	size_t	count;

	count = 0;
	while (s[count] != c && s[count] != '\0')
		count++;
	return (count);
}

static char	**ft_free(const char **str, size_t len)
{
	while (len--)
		free((void *)str[len]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char		**str;
	size_t		i;
	size_t		len;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_count_words(s, c);
	str = (char **)malloc((len + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (i < len)
	{
		while (*s == c) // salta hasta el caracter q necesito
			s++;
		str[i] = (char *)malloc((ft_numchar(s, c) + 1) * sizeof(char)); // cuanto mide la palabra
		if (!str[i])
			return (ft_free((const char **)str, i));
		ft_strlcpy(str[i], s, (ft_numchar(s, c) + 1)); // copia la primera palabra
		s = ft_strchr(s, (int)c); // salta hasta el caracter q necesito
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
int main(void)
{
    const char *input_string = "^^^1^^a2,^^^^3^^^^--h^^^^";
    char delimiter = '^';
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
    return (EXIT_SUCCESS);
}
*/
