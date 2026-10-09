/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeyer <dmeyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 13:36:19 by dmeyer            #+#    #+#             */
/*   Updated: 2026/10/09 16:47:08 by dmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*aux;
	char	*last;
	int		found;

	aux = (char *)s;
	found = 0;
	while (*aux != '\0')
	{
		if (*aux == c)
		{
			found = 1;
			last = aux;
		}
		aux++;
	}
	if (found == 1)
		return (last);
	else
		return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	const	char s[] = "hola que tal";

	printf("Original c = i: %s || y s queda : %s\n" , strrchr(s,'i'),s);
	printf("FT c = i      : %s || y s queda : %s\n", ft_strrchr(s,'i'),s);
	printf("Original c = h: %s || y s queda : %s\n", strrchr(s,'h'),s);
	printf("Ft c = h      : %s || y s queda : %s\n", ft_strrchr(s,'h'),s);
	printf("Original c = l: %s || y s queda : %s\n", strrchr(s,'l'),s);
	printf("Ft c = l      : %s || y s queda : %s\n" , ft_strrchr(s,'l'),s);
	printf("Original c = q: %s || y s queda : %s\n", strrchr(s,'q'),s);
	printf("Ft c = q      : %s || y s queda : %s\n" , ft_strrchr(s,'q'),s);
}
*/