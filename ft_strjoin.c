/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:07:30 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/12 13:58:26 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	str = malloc(1 * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
/*
int main(void)
{
    const char *cadena1 = "Hola, ";
    const char *cadena2 = "mundo!";

    char *concatenada = ft_strjoin(cadena1, cadena2);
	
    if (concatenada != NULL)
    {
        printf("Cadena concatenada: %s\n", concatenada);
        free(concatenada);
    }
    else
    {
        printf("Error al concatenar cadenas.\n");
    }
    return (0);
}
*/
