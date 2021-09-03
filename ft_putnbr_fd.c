// DESCRIPTION
// Outputs the integer N to the given file descriptor.

// PARAMETERS
// #1. The integer to output.
// #2. The file descriptor on which to write.

// RETURN VALUE
// -

#include "libft.h"

static void	putint_fd(int n, int fd)
{
	if (n >= 10)
		putint_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	putint_fd(n, fd);
}
