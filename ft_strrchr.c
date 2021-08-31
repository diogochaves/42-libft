// DESCRIPTION: locate the last occurrence of character in string
// PARAMETERS: #1. the string to search. | #2. the char to find.
// RETURN: A pointer to the matched character or NULL if the character is not
// found. The terminating null byte is considered part of the string, so that
// if C is specified as '\0', the function return a pointer to the terminator.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len > 0 && (char)c != s[len])
		len--;
	if ((char)c == s[len])
		return ((char *)&s[len]);
	return (0);
}
