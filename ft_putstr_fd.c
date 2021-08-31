// DESCRIPTION
// Outputs the string S to the given file descriptor.

// PARAMETERS
// #1. The string to output.
// #2. The file descriptor on which to write.

// RETURN VALUE
// -

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
