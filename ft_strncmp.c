











#include "libft"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!s1 || !s2 || (n <= 0))
		return (0);
	i = 0;
	while ((s1[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	if ((s2[i] != '\0') && (i != n))
		return (s1[i] - s2[i]);
	return (0);
}
