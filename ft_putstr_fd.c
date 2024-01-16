/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:32:22 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/16 12:44:20 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	write(fd, s, i);
}
/*
int main(void)
{
    char *cadena = "Hola, mundo!";
    int descriptor_de_archivo = 1;

    ft_putstr_fd(cadena, descriptor_de_archivo);
    return (0);
}
*/
