/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeyer <dmeyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:37:30 by dmeyer            #+#    #+#             */
/*   Updated: 2026/10/09 13:26:58 by dmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (dst == NULL || src == NULL)
		return (i);
	while (i < size && (src[i] != '\0' || dst[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i - 1] = '\0';
	i++;
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
#include <string.h>
#include <bsd/string.h>
#include <stdio.h>
int main ()
{
	char mem1[] = "pepe el";
	char mem2[] = "Hola Mundo";

	char mem3[] = "pepe el";
	char mem4[] = "Hola Mundo";

	printf("resultado : %s ,", mem1);
	printf("numero copiado :%zu \n", strlcpy(mem1, mem2, 5));
	printf("resultado : %s ,", mem3);
	printf(" numero copiado :%zu", ft_strlcpy(mem3, mem4, 5));
}*/