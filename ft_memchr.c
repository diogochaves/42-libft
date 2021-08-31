// DESCRIPTION
// Scans the initial N bytes of the memory area pointed to by S for the first
// instance of C. Both C and the bytes of the memory area pointed to by S are
// interpreted as unsigned char.

// PARAMETERS
// #1. the memmory area to search.
// #2. the char to find.

// RETURN VALUE
// A pointer to the matching byte or NULL if the character does not occur in
// the given memory area

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
