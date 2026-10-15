/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeyer <dmeyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 08:56:15 by dmeyer            #+#    #+#             */
/*   Updated: 2026/10/15 09:06:58 by dmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if ((!s1 && !s2) || (n <= 0))
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i] && i < n))
		i++;
	return (s1[i] - s2[i]);
}

/*int main(void)
{
		printf("%d", ft_strncmp("asdfa", "asdda", 4));
}*/