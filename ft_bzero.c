// DESCRIPTION: Erases the data in the N bytes of the memory starting at the
// location pointed to by S, by writing zeroes (bytes containing '\0') to that
// area.
// PARAMETERS: #1. The pointer to the memory area. | #2. The quantity of bytes
// to erase.
// RETURN : -

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
