// DESCRIPTION: Checks for a digit (0 through 9)
// PARAMETERS: #1. the char to check.
// RETURN: 1 if the character c falls into the tested class, and 0 if not.

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
