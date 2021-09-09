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
	char	*substr;
	size_t	j;

	substr = malloc(sizeof(char) * (len + 1));
	if (!s || !substr)
		return (0);
	j = 0;
	while (start < ft_strlen(s) && j < len)
		substr[j++] = s[start++];
	substr[j] = '\0';
	return (substr);
}
