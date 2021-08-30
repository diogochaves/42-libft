// DESCRIPTION: Convert a uppercase letter to lowercase.
// PARAMETERS: #1. the char to convert.
// RETURN: If c is a uppercase letter, returns its lowercase equivalent.
// Otherwise, it returns c.

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
