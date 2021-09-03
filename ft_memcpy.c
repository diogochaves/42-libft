// DESCRIPTION
// Copies N bytes from memory area SRC to memory area DEST. The memory areas
// must not overlap.

// PARAMETERS
// #1. The pointer to the memory area DEST.
// #2. The pointer to the memory area SCR.
// #3. The quantity of bytes to copy.

// RETURN VALUE
// A pointer to the memory area DEST.

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n-- && dest != src)
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	return (dest);
}
