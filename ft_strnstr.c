/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeyer <dmeyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:36:09 by dmeyer            #+#    #+#             */
/*   Updated: 2026/10/15 16:59:10 by dmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	
	int	aux;
	int	i;
	int	j;

	i = 0;
	if (!little)
		return (&big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			aux = i;
			j = 0;
			while (big[aux] == little[j] && little[j] != '\0' && j < len)
			{
				aux++;
				j++;
			}
			if (little[j] == '\0')
				return (&big[i]);
		}
		i++;
	}
	return (NULL);
}
