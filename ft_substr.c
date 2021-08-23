// ft_substr
//
// Allocates (with malloc(3)) and returns a substring from the string ’s’.
// The substring begins at index ’start’ and is of maximum size ’len’.

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	size;

	size = len + 1;
	ptr = malloc(size);
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, &s[start], size);
	return (ptr);
}
