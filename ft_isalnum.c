// Checks for an alphanumeric character; it is equivalent to
// (isalpha(c) || isdigit(c)).

#include "libft.h"

int	ft_isallnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
