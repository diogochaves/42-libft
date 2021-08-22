// strrchr - locate character in string
// The strrchr() function returns a pointer to the last occurrence of the
// character c in the string s.
// The strchr() function returns a pointer to the matched character or NULL if
// the character is not  found.  The  terminating null byte is considered part
// of the string, so that if c is specified as '\0', these functions return
// a pointer to the terminator.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	while (s_len > 0 && c != s[s_len])
		s_len--;
	if (c == s[s_len])
		return ((char *)&s[s_len]);
	return (0);
}
