// ft_split
//
// Description
// Allocates (with malloc(3)) and returns an array of strings obtained by
// splitting ’s’ using the character ’c’ as a delimiter. The array must be
// ended by a NULL pointer.
//
// Return value
// The array of new strings resulting from the split. NULL if the allocation
// fails.

#include "libft.h";

size_t	ft_strtemp(char *b, char *s, char c)
{
	size_t	counter;
	size_t	i;

	counter = 0;
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			*b = *s;
			b++;
		}
		else if (*(b - 1) != c)
		{
			*b = *s;
			b++;
			counter++;
		}
		s++;
	}
	*b = '\0';
	return (counter + 1);
}

char	**ft_split(char const *s, char c)
{
	size_t	counter;
	size_t	last;
	size_t	i;
	char	*buffer;
	char	**split;

	buffer = malloc(sizeof(s) * (ft_strlen(s) + 1));
	counter = ft_strtemp(buffer, s, c);
	split = malloc(sizeof(s)*(counter + 1));
	i = 0;
	last = 0;
	while(buffer[i])
	{
		if (buffer[i] == c)
		{
			split = ft_substr(buffer, last, i - last);
			split++;
			last = i + 1;
		}
		i++;
	}
	*split = '\0';
	free(buffer);
	return (split);
}
