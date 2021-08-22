// atoi - convert a string to an integer
// The atoi() function converts the initial portion of the string pointed to by
// nptr to int.  The behavior is the same as strtol(nptr, NULL, 10);
//
// The string may begin with an arbitrary amount of white space (as
// determined  by  isspace(3))  followed  by  a  single optional  '+'  or  '-'
// sign.

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
	while (*nptr >= '0' && *nptr <= '9')
	{
		num *= 10;
		num += *nptr - '0';
		++nptr;
	}
	return (sign * num);
}
