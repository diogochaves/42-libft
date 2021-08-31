// DESCRIPTION
// Outputs the integer N to the given file descriptor.

// PARAMETERS
// #1. The integer to output.
// #2. The file descriptor on which to write.

// RETURN VALUE
// -

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	ft_putstr_fd(s, fd);
}
