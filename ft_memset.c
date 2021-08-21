// memset - fill memory with a constant byte
// The memset() function fills the first n bytes of the memory area
// pointed to by s with the constant byte c.
// The memset() function returns a pointer to the memory area s.

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr_s;

	ptr_s = s;
	while (n--)
		ptr_s[n] = c;
	return (s);
}
