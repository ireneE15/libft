/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:52:23 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/16 09:51:18 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!len || start > ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	if (len > ft_strlen(s) - start)
	{
		len = ft_strlen(s) - start;
	}
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
	{
		return (NULL);
	}
	ft_strlcpy(sub, s + start, (len + 1));
	return (sub);
}

/*
int main(void)
{
    const char *original = "Hola, mundo!";
    unsigned int start = 6;
    size_t len = 5;

    char *substring = ft_substr(original, start, len);

    printf("Original: %s\n", original);
    printf("Substring: %s\n", substring);
    free(substring);
    return (0);
}
*/
