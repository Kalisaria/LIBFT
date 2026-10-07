/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeyer <dmeyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 17:08:12 by dmeyer            #+#    #+#             */
/*   Updated: 2026/10/07 17:46:12 by dmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	f_strlen(const char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		cont ++;
	}
	return (cont);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	unsigned res;
	
	res = ft_strlen(dst) + f_strlen(src);
	i = 0;
	j = 0;
	while(dst[i]!= '\0' && i < size)
	{
		i++;
	}
	while (src[j] != '\0' && i < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i-1] = '\0';
	while (src[j] != '\0')
		j++;
	return (res);
}

#include <string.h>
#include <bsd/string.h>
#include <stdio.h>
int main ()
{
	char mem1[] = "pepe el";
	char mem2[] = "Hola Mundo";
	
	char mem3[] = "pepe el";
	char mem4[] = "Hola Mundo";
	
	printf("resultado : %s , numero copiado :%zu \n", mem1, strlcat(mem1, mem2, 12));
	printf("resultado : %s , numero copiado :%zu", mem3, ft_strlcat(mem3, mem4, 12));
}