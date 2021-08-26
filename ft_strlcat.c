// DESCRIPTION: Appends the NUL-terminated string SRC to the end of DST.
// It will append at most (SIZE - strlen(DST) - 1 byte), NUL-terminating
// the result.
// PARAMETERS: #1. The pointer to the memory area DST. | #2. The pointer to
// the memory area SCR. | #3. The quantity of bytes to append.
// RETURN: The total length of the string it tried to create (the initial
// length of DST plus the length of SRC).

/*
 strlcat() take the full size of the buffer (not just the length) and
 guarantee to NUL-terminate the result (as long as there is at least one byte
 free in DST).  Note that a byte for the NUL should be included in size.
 Also note that strlcat() only operate on true “C” strings.  This means that
 for strlcat() both SRC and DST must be NUL-terminated.

 If strlcat() traverses size characters without finding a NUL, the length of
 the string is considered to be SIZE and the destination string will not be
 NUL-terminated (since there was no space for the NUL). This keeps strlcat()
 from running off the end of a string. In practice this should not happen (as
 it means that either SIZE is incorrect or that DST is not a proper “C”
 string). The check exists to prevent potential security problems in incorrect
 code.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] && (dst_len + i) < (size - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
