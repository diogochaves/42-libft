// memcpy - copy memory area
// The  memcpy()  function  copies  n bytes from memory area src to memory area
// dest.  The memory areas must not overlap.  Use memmove(3) if the memory
// areas do overlap.
// The memcpy() function returns a pointer to dest.

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n--)
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	return (dest);
}
