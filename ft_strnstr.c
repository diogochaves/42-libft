// strnstr — locate a substring in a string
// The strnstr() function locates the first occurrence of the null-terminated
// string little in the string big, where not more than len characters are
// searched.  Characters that appear after a ‘\0’ character are not searched.
//
// If little is an empty string, big is returned; if little occurs nowhere in
// big, NULL is returned; otherwise a pointer to the first character of the
// first occurrence of little is returned.

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*marker;
	size_t	i;

	marker = (char *)big;
	i = 0;
	while (*big && len--)
	{
		if (!little[i])
			return (marker);
		if (*big == little[i++])
		{
			if (!marker)
				marker = (char *)big;
		}
		else
		{
			marker = 0;
			i = 0;
		}
		big++;
	}
	return (0);
}
