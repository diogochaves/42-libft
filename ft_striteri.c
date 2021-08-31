// DESCRIPTION
// Applies the function F to each character of the string passed as argument,
// and passing its index as first argument. Each character is passed by address
// to F to be modified if necessary

// PARAMETERS
// #1. The string on which to iterate.
// #2. The function to apply to each character.

// RETURN VALUE
// -

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
