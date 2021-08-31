// DESCRIPTION: locates the first occurrence of the null-terminated string
// LITTLE in the string BIG, where not more than LEN characters are searched.
// Characters that appear after a ‘\0’ character are not searched.
// PARAMETERS: #1. the string to search. | #2. the string to find. | #3. the
// number of char.
// RETURN: If LITTLE is an empty string, BIG is returned; if LITTLE occurs
// nowhere in BIG, NULL is returned; otherwise a pointer to the first character
// of the first occurrence of LITTLE is returned.

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (!little[0])
		return ((char *)big);
	while (big[j])
	{
		i = 0;
		while (big[j + i] == little[i] && little[i] && len > (j + i))
			i++;
		if (!little[i])
			return ((char *)big + j);
		j++;
	}
	return (0);
}
