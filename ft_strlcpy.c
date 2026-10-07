/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeyer <dmeyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:37:30 by dmeyer            #+#    #+#             */
/*   Updated: 2026/10/07 17:05:33 by dmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	if(dst == NULL || src == NULL)
		return (i);
	while(i < size && (src[i] != '\0' || dst[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i-1] = '\0';
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
	
	printf("resultado : %s , numero copiado :%zu \n", mem1, strlcpy(mem1, mem2, 5));
	printf("resultado : %s , numero copiado :%zu", mem3, ft_strlcpy(mem3, mem4, 5));
}*/