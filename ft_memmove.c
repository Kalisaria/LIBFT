/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeyer <dmeyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:03:04 by dmeyer            #+#    #+#             */
/*   Updated: 2026/10/07 18:11:21 by dmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_strcpy(char *dst, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i-1] = '\0'; 
}

void *memmove(void *dest, const void *src, size_t n)
{
	char *aux;
	ft_strcpy(aux, (char *)src);
	ft_memcpy((char *)dest, aux, n);
}
