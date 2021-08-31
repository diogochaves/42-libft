// DESCRIPTION
// Compares the first (at most) N bytes the two strings S1 and S2.

// PARAMETERS
// #1. the 1st string to compare.
// #2. the 2nd string to compare.
// #3. the number of bytes to compare.

// RETURN VALUE
// An integer less than, equal to, or greater than zero if S1 is found,
// respectively, to be less than, to match, or be greater than S2.

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	diff;

	diff = 0;
	while ((*s1 || *s2) && n--)
	{
		diff = (unsigned char)*s1 - (unsigned char)*s2;
		if (diff != 0)
			break ;
		s1++;
		s2++;
	}
	return (diff);
}
