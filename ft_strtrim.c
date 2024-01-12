/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:05:49 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/12 14:42:55 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// int	ft_isspace(char c)
// {
// 	return (c == ' ' || c == '\t' || c == '\n');
// }

// char	*ft_strtrim(const char *s)
// {
// 	size_t	start;
// 	size_t	end;
// 	if (!s)
// 		return (NULL);	
// }

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
