// DESCRIPTION: Allocates memory for an array of NMEMB elements of SIZE bytes
// each. The memory is set to zero.
// PARAMETERS: #1. the number of elements. | #2. the size of each element.
// RETURN: If NMEMB or SIZE is 0, then it returns either NULL, or a unique
// pointer value that can later be successfully passed to free().

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
