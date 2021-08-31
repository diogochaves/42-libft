// DESCRIPTION
// Copies up to (SIZE - 1) characters from the NUL-terminated string SRC to
// DST, NUL-terminating the result.

// PARAMETERS
// #1. The pointer to the memory area DST.
// #2. The pointer to the memory area SCR.
// #3. The quantity of bytes to copy.

// RETURN VALUE
// The total length of the string it tried to create (length of SRC).

/*
 Strlcpy() take the full size of the buffer (not just the length) and
 guarantee to NUL-terminate the result (as long as size is larger than 0).
 Note that a byte for the NUL should be included in size.  Also note that
 strlcpy() only operate on true “C” strings.  This means that for strlcpy()
 src must be NUL-terminated.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	i = 0;
	if (size)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
