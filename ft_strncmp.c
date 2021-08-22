// strncmp - compare two strings
// The  strcmp() function compares the two strings s1 and s2.  It returns an
// integer less than, equal to, or greater than zero if s1 is found,
// respectively, to be less than, to match, or be greater than s2.
// The strncmp() function is similar, except it compares only the first (at
// most) n bytes of s1 and s2.

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
