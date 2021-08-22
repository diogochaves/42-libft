// If  c is a lowercase letter, toupper() returns its uppercase equivalent, if
// an uppercase representation exists in the current locale.  Otherwise, it
// returns c.

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
