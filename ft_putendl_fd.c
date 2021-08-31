// DESCRIPTION
// Outputs the string S to the given file descriptor, followed by a newline.

// PARAMETERS
// #1. The string to output.
// #2. The file descriptor on which to write.

// RETURN VALUE
// -

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
