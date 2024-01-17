/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:47:29 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/17 11:42:24 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	ft_count_words(char const *s, char c)
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

static size_t	ft_numchar(const char *s, char c)
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
		while (*s == c)
			s++;
		str[i] = (char *)malloc((ft_numchar(s, c) + 1) * sizeof(char));
		if (!str[i])
			return (ft_free((const char **)str, i));
		ft_strlcpy(str[i], s, (ft_numchar(s, c) + 1));
		s = ft_strchr(s, (int)c);
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
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
*/
/*
int main(void)
{
    const char *input_string = "^^^1^^2a,^^^^3^^^^--h^^^^";
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
