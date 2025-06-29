#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*cp1;
	const unsigned char	*cp2;
	size_t				i;

	cp1 = (const unsigned char *)s1;
	cp2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (cp1[i] != cp2[i])
			return (cp1[i] - cp2[i]);
		i++;
	}
	return (0);
}
