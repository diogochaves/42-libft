// DESCRIPTION
// Checks for an alphanumeric character; it is equivalent to
// (isalpha(c) || isdigit(c)).

// PARAMETERS
// #1. the char to check.

// RETURN VALUE
// 1 if the character C falls into the tested class, and 0 if not.

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
