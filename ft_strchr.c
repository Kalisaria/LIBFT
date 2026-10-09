/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeyer <dmeyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 12:18:33 by dmeyer            #+#    #+#             */
/*   Updated: 2026/10/09 16:47:10 by dmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*aux;
	int		found;

	aux = (char *)s;
	found = 0;
	while (found == 0 && *aux != '\0')
	{
		if (*aux == c)
		{
			found = 1;
			return (aux);
		}
		aux++;
	}
	return (NULL);
}
/*/
#include <stdio.h>
#include <string.h>
int main()
{
	const	char s[] = "hola que tal";

	printf("Original c = i: %s || y s queda : %s\n" , strchr(s,'i'),s);
	printf("FT c = i      : %s || y s queda : %s\n", ft_strchr(s,'i'),s);
	printf("Original c = h: %s || y s queda : %s\n", strchr(s,'h'),s);
	printf("Ft c = h      : %s || y s queda : %s\n", ft_strchr(s,'h'),s);
	printf("Original c = l: %s || y s queda : %s\n", strchr(s,'l'),s);
	printf("Ft c = l      : %s || y s queda : %s\n" , ft_strchr(s,'l'),s);
	printf("Original c = q: %s || y s queda : %s\n", strchr(s,'q'),s);
	printf("Ft c = q      : %s || y s queda : %s\n" , ft_strchr(s,'q'),s);
}*/