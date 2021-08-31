// DESCRIPTION
// Outputs the character C to the given file descriptor.

// PARAMETERS
// #1. The character to output.
// #2. The file descriptor on which to write.

// RETURN VALUE
// -


#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
