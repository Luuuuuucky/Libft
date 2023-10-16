#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	d;

	if (!n)
		return (0);
	d = 0;
	while (d < n && s1[d] && s2[d] && s1[d] == s2[d])
		d++;
	if (d < n)
		return (s1[d] - s2[d]);
	else
		return (0);
}
