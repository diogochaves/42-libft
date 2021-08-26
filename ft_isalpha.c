// DESCRIPTION: Checks for an alphabetic character. In the standard "C"
// locale, it is equivalent to (isupper(c) || islower(c)).
// PARAMETERS: #1. the char to check.
// RETURN: 1 if the character c falls into the tested class, and 0 if not.

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
