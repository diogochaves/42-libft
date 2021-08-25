// ft_strmapi
//
// Description
// Applies the function ’f’ to each character of the string ’s’ to create a new
// string (with malloc(3)) resulting from successive applications of ’f’.
//
// Return value
// The string created from the successive applications of ’f’. Returns NULL if
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
