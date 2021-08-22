// strchr - locate character in string
// The strchr() function returns a pointer to the first occurrence of the
// character c in the string s.
//
// The strchr() function returns a pointer to the matched character or NULL if
// the character is not  found.  The  terminating null byte is considered part
// of the string, so that if c is specified as '\0', these functions return
// a pointer to the terminator.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	return (0);
}
