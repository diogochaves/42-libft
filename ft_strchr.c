// DESCRIPTION: locate the first occurrence of character in string
// PARAMETERS: #1. the string to search. | #2. the char to find.
// RETURN: A pointer to the matched character or NULL if the character is not
// found. The terminating null byte is considered part of the string, so that
// if C is specified as '\0', the function return a pointer to the terminator.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
