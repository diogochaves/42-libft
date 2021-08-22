// memchr - scan memory for a character
// The  memchr() function scans the initial n bytes of the memory area pointed
// to by s for the first instance of c.  Both c and the bytes of the memory
// area pointed to by s are interpreted as unsigned char.
//
// The memchr() function returns a pointer to the matching byte or NULL if the
// character does not occur in the given memory area.

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
