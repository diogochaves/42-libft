// memmove - copy memory area
// The  memmove() function copies n bytes from memory area src to memory area
// dest.  The memory areas may overlap: copying takes place as though
// the bytes in src are first copied into a temporary array that does not
// overlap src or dest, and the bytes are then copied from the temporary
// array to dest.
// The memmove() function returns a pointer to dest.

/*
 If the buffers don't overlap, it doesn't matter what direction
 we copy in. If they do, it does, so just assume they always do.
 We don't concern ourselves with the possibility that the region
 to copy might roll over across the top of memory, because it's
 not going to happen.

 If the destination is above the source, we have to copy
 back to front to avoid overwriting the data we want to
 copy.

      dest:       dddddddd
      src:    ssssssss   ^
              |   ^  |___|
              |___|

 If the destination is below the source, we have to copy
 front to back.

      dest:   dddddddd
      src:    ^   ssssssss
              |___|  ^   |
                     |___|

*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest > src)
	{
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
