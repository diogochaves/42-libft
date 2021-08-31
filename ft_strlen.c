// DESCRIPTION
// Calculates the length of the string pointed to by S, excluding the
// terminating null byte ('\0').

// PARAMETERS
// #1. The string to count.

// RETURN VALUE
// The lenght of the string.

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char	*p;

	p = s;
	while (*p)
		p++;
	return (p - s);
}
