#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*ptr;
	char character;

	ptr = (char *)b;
	i = 0;
	character = (unsigned char)c;
	while (i < len)
	{
		ptr[i] = character;
		i++;
	}
	return (b);
}
