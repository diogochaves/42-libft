// DESCRIPTION
// Allocates (with malloc(3)) and returns a copy of S1 with the characters
// specified in SET removed from the beginning and the end of the string.

// PARAMETERS
// #1. The string to be trimmed.
// #2. The reference set of characters to trim.

// RETURN VALUE
// The trimmed string. NULL if the allocation fails.

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
