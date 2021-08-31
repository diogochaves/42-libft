// DESCRIPTION
// Allocates (with malloc(3)) and returns a new string, which is the result of
// the concatenation of S1 and S2.

// PARAMETERS
// #1. The prefix string.
// #2. The suffix string.

// RETURN VALUE
// The new string. NULL if the allocation fails.

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	ptr_size;
	char	*ptr;

	s1_len = ft_strlen(s1);
	ptr_size = s1_len + ft_strlen(s2) + 1;
	ptr = malloc(ptr_size);
	if (!ptr)
		return (0);
	ft_memcpy(ptr, s1, s1_len + 1);
	ft_strlcat(ptr, s2, ptr_size);
	return (ptr);
}
