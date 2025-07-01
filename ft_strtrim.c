#include "libft.h"

static int	ft_in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s, const char *set)
{
	size_t	start;
	size_t	end;
	char	*p1;

	if (!s || !set)
		return (NULL);
	start = 0;
	while (s[start] && ft_in_set(s[start], set))
		start++;
	end = ft_strlen(s) - 1;
	while (end > start && ft_in_set(s[end], set))
		end--;
	if (start > end)
		return (ft_strdup(""));
	p1 = malloc(end - start + 2);
	if (!p1)
		return (NULL);
	ft_memcpy(p1, s + start, end - start + 1);
	p1[end - start + 1] = '\0';
	return (p1);
}
