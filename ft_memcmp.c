// DESCRIPTION: Compares the first N bytes (each interpreted as unsigned char)
// of the memory areas S1 and S2.
// PARAMETERS: #1. the 1st memmory area. | #2. the 2nd memmory area. | #3. the
// number of bytes to compare.
// RETURN: An integer less than, equal to, or greater than zero if S1 is found,
// respectively, to be less than, to match, or be greater than S2.

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	return (ft_strncmp(s1, s2, n));
}
