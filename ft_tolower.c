// If c is an uppercase letter, tolower() returns its lowercase equivalent, if
// a lowercase representation exists in the current locale.   Otherwise, it
// returns c.

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
