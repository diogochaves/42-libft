// DESCRIPTION
// Converts the initial portion of the string pointed to by NPTR to int.
// The string may begin with an arbitrary amount of white space (as determined
// by isspace(3)) followed by a single optional '+' or '-' sign.

// PARAMETERS
// #1. the char to convert.

// RETURN VALUE
// The integer value.

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	while ((*nptr >= '\t' && *nptr <= '\r') || *nptr == ' ')
		++nptr;
	sign = 1;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -sign;
		++nptr;
	}
	num = 0;
	while (ft_isdigit(*nptr))
	{
		num *= 10;
		num += *nptr - '0';
		++nptr;
	}
	return (sign * num);
}
