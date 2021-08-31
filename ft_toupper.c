// DESCRIPTION
// Convert a lowercase letter to uppercase.

// PARAMETERS
// #1. the char to convert.

// RETURN VALUE
// If C is a lowercase letter, returns its uppercase equivalent. Otherwise, it
// returns C.

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
