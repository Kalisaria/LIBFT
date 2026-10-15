/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeyer <dmeyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:03:04 by dmeyer            #+#    #+#             */
/*   Updated: 2026/10/15 16:15:12 by dmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void *memmove(void *dest, const void *src, size_t n)
{
	
}


#include <string.h>
 int main()
 {
	void *dest;
	void *src;
	size_t n;

	src = "hola que tal";
	dest = &src[4];
	n = 2;
	printf("src : %s\n", (char *)src);
	printf("Original: %s\n",(char *)dest);
	memmove(dest,src, n);

	printf("Original: %s\n",(char *)dest);
 }