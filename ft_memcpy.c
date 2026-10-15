/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeyer <dmeyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 01:12:35 by dmeyer            #+#    #+#             */
/*   Updated: 2026/10/15 08:54:42 by dmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	ft_strncpy((char *)dest, (char *)src, n);
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    int a = 20;
    int b = 10;
    int c = 20;
    int d = 10;
    printf("Valor de b antes memcpy: %d\n", b);
	printf("Valor de d antes ft_memcpy: %d\n", b);

    memcpy(&b, &a, sizeof(int)); 
	ft_memcpy(&b, &a,sizeof(int));
    printf("Valor de b despues de memcpy: %d\n", b);
    printf("Valor de d despues de ft_memcpy: %d\n", b);

    char str1[] = "Geeks";
    char str2[6] = "";
	char str3[] = "Geeks";
    char str4[6] = "";
	
    printf("Valor de str2 antes memcpy: %s\n", str2);
	printf("Valor de str4 antes ft_memcpy: %s\n", str4);
	
    memcpy(str2, str1, sizeof(str1));
	ft_memcpy(str4, str3, sizeof(str3));
    printf("Valor de str2 despues de memcpy:%s\n",str2);
    printf("Valor de str4 despues de memcpy:%s\n",str4);

	char str5[] = "";
    char str6[] = "Geeks";
	char str7[] = "";
    char str8[] = "Geeks";

    printf("Valor de str6 antes memcpy: %s\n", str6);
	printf("Valor de str8 antes ft_memcpy: %s\n", str8);
	
    memcpy(str6, str5, sizeof(str5));
	ft_memcpy(str8, str7, sizeof(str7));
    printf("Valor de str6 despues de memcpy:%s\n",str6);
    printf("Valor de str8 despues de memcpy:%s\n",str8);
	
}
*/