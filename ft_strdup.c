// DESCRIPTION: Duplicates the string S.
// PARAMETERS: #1. the string to duplicate.
// RETURN: A pointer to the duplicated string. It returns NULL if insufficient
// memory was available, with errno set to indicate the cause of the error.

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	size;

	size = ft_strlen(s) + 1;
	ptr = malloc(size);
	if (!ptr)
		return (0);
	ft_memcpy(ptr, s, size);
	return (ptr);
}
