// DESCRIPTION
// Allocates (with malloc(3)) and returns a substring from the string S.
// The substring begins at index START and is of maximum size LEN.

// PARAMETERS
// #1. The string from which to create the substring.
// #2. The start index of the substring in the string S.
// #3. The maximum length of the substring.

// RETURN VALUE
// The substring. NULL if the allocation fails.

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	size;

	if (ft_strlen(s) < len)
		size = ft_strlen(s) + 1;
	else
		size = len + 1;
	ptr = malloc(size);
	if (!ptr)
		return (0);
	if (start < ft_strlen(s))
		ft_strlcpy(ptr, &s[start], size);
	return (ptr);
}
