// DESCRIPTION
// Applies the function F to each character of the string S to create a new
// string (with malloc(3)) resulting from successive applications of F.

// PARAMETERS
// #1. The string on which to iterate.
// #2. The function to apply to each character.

// RETURN VALUE
// The string created from the successive applications of F. Returns NULL if
// the allocation fails.

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (0);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
