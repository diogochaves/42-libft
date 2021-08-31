// DESCRIPTION
// Copies N bytes from memory area SRC to memory area DEST. The memory areas
// may overlap.

// PARAMETERS
// #1. The pointer to the memory area DEST.
// #2. The pointer to the memory area SCR.
// #3. The quantity of bytes to copy.

// RETURN VALUE
// A pointer to the memory area DEST.

/*
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
