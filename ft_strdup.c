// strdup - duplicate a string
//
// The  strdup()  function  returns  a  pointer to a new string which is a
// duplicate of the string s.  Memory for the new string is obtained with
// malloc(3), and can be freed with free(3).
//
// On success, the strdup() function returns a pointer to the duplicated
// string.  It returns NULL if insufficient  memory was available, with errno
// set to indicate the cause of the error.

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	size;

	size = ft_strlen(s) + 1;
	ptr = malloc(size);
	if (!ptr)
		return (0);
	ft_memcpy(ptr, s, size);
	return (ptr);
}
