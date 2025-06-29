#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;
	char	*p;

	if (!haystack || !needle)
		return (NULL);
	needle_len = ft_strlen(needle);
	if (!needle_len)
		return ((char *)haystack);
	if (n < needle_len)
		return (NULL);
	i = 0;
	while (haystack[i] && i <= n - needle_len)
	{
		j = 0;
		while (needle[j] && needle[j] == haystack[i + j])
			j++;
		if (j == needle_len)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}