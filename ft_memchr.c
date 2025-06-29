#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;
	unsigned char character;

	ptr = (unsigned char *)s;
	i = 0;
	character = (unsigned char)c;
	while (i < n)
	{
		if (ptr[i] == character)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
