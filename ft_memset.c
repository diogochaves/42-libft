// DESCRIPTION: Fills the first N bytes of the memory area pointed to by S
// with the constant byte C.
// PARAMETERS: #1. The pointer to the memory area. | #2. The byte to set. |
// #3. The quantity of bytes to set.
// RETURN: A pointer to the memory area S.

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	while (n--)
		((unsigned char *)s)[n] = c;
	return (s);
}
