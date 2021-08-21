// memcpy - copy memory area
// The  memcpy()  function  copies  n bytes from memory area src to memory area
// dest.  The memory areas must not overlap.  Use memmove(3) if the memory
// areas do overlap.
// The memcpy() function returns a pointer to dest.

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*ptr_dest;
	const char	*ptr_src;

	ptr_dest = dest;
	ptr_src = src;
	while (n--)
	{
		ptr_dest[n] = ptr_src[n];
	}
	return (dest);
}
