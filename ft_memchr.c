/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeyer <dmeyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 08:55:18 by dmeyer            #+#    #+#             */
/*   Updated: 2026/10/15 16:23:30 by dmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*aux;
	size_t			cont;

	cont = 0;
	aux = (unsigned char *) s;
	while (aux[cont] != '\0' && cont < n)
	{
		if (aux[cont] == c)
		{
			return (&aux[cont]);
		}
		cont++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	unsigned char s[] = "hola que tal";
	printf("*****************************************\n");
	printf("Original c = i: %s ||  , (char *)memchr(s,'i', 5));
	printf(" y s queda : %s\n",s)
	printf("FT c = i      : %s ||", (char *)ft_memchr(s,'i',5));
	printf(" y s queda : %s\n", s)
	printf("*****************************************\n");
	printf("Original c = h: %s ||", (char *)memchr(s,'h',5));
	printf(" y s queda : %s\n", s)
	printf("Ft c = h      : %s |", (char *)ft_memchr(s,'h',6));
	printf(" y s queda : %s\n", s)
	printf("*****************************************\n");
	printf("Original c = l: %s ||", (char *)memchr(s,'l', 6));
	printf(" y s queda : %s\n", s)
	printf("Ft c = l      : %s ||" , (char *)ft_memchr(s,'l', 5);
	printf(" y s queda : %s\n", s))
	printf("*****************************************\n");
	printf("Original c = q: %s ||", (char *)memchr(s,'q', 5));
	printf(" y s queda : %s\n", s)
	printf("Ft c = q      : %s ||" , (char *)ft_memchr(s,'q', 5));
	printf(" y s queda : %s\n", s)
	printf("*****************************************\n");
	printf("Original c = q: %s ||", (char *)memchr(s,'q', 7);
	printf(" y s queda : %s\n,", s))
	printf("Ft c = q      : %s ||" , (char *)ft_memchr(s,'q', 7));
	printf(" y s queda : %s\n,", s)
	printf("*****************************************\n");
}
*/