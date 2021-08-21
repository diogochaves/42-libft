// isprint()
// checks for any printable character including space.

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
