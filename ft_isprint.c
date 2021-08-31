// DESCRIPTION
// Checks for any printable character, including space.

// PARAMETERS
// #1. the char to check.

// RETURN VALUE
// 1 if the character C falls into the tested class, and 0 if not.

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
