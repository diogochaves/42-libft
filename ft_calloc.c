// calloc - allocate dynamic memory
// The  calloc() function allocates memory for an array of nmemb elements of
// size bytes each and returns a pointer to the allocated memory.  The memory
// is set to zero.  If nmemb or size is 0, then calloc() returns either NULL,
// or  a  unique pointer value that can later be successfully passed to free().

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(size * nmemb);
	if (!ptr)
		return (0);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}
