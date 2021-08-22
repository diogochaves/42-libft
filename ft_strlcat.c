// strlcat — size-bounded string concatenation

// DESCRIPTION
// strlcat() take the full size of the buffer (not just the length) and
// guarantee to NUL-terminate the result (as long as there is at least one byte
// free in dst).  Note that a byte for the NUL should be included in size.
// Also note that strlcat() only operate on true “C” strings.  This means that
// for strlcat() both src and dst must be NUL-terminated.

// The strlcat() function appends the NUL-terminated string src to the end
// of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-ter‐
// minating the result.

// RETURN VALUES
// The strlcat() function returns the total length of the
// string it tried to create.  For strlcat() that means the initial length of
// dst plus the length of src.  While this may seem somewhat confusing, it was
// done to make truncation detection simple.

// Note, however, that if strlcat() traverses size characters without
// finding a NUL, the length of the string is considered to be size and the
// destination string will not be NUL-terminated (since there was no space
// for the NUL).  This keeps strlcat() from running off the end of a
// string.  In practice this should not happen (as it means that either
// size is incorrect or that dst is not a proper “C” string).  The check
// exists to prevent potential security problems in incorrect code.

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
