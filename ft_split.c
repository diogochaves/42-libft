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

#include "libft.h"

size_t	ft_strclean(char *b, const char *s, char c)
{
	size_t	counter;
	size_t	i;
	size_t	len;

	counter = 0;
	i = 0;
	while (*s == c)
		s++;
	if (*s == '\0')
		return 0;
	len = ft_strlen(s);
	while (s[len-1] == c)
		len--;
	while (i < len)
	{
		if (s[i] != c)
		{
			*b = s[i];
			b++;
		}
		else if (*(b - 1) != c)
		{
			*b = s[i];
			b++;
			counter++;
		}
		i++;
	}
	*b = '\0';
	return (counter + 1);
}

char	**ft_split(char const *s, char c)
{
	size_t	counter;
	size_t	last;
	size_t	i;
	size_t	j;
	char	*buffer;
	char	**split;

	buffer = malloc(sizeof(s) * (ft_strlen(s) + 1));
	counter = ft_strclean(buffer, s, c);
	if (!counter)
		return 0;
	split = malloc(sizeof(char *) * (counter + 1));
	i = 0;
	j = 0;
	last = 0;
	while(buffer[i] != '\0' || counter)
	{
		if (buffer[i] == c || buffer[i] == '\0')
		{
			split[j] = ft_substr(buffer, last, i - last);
			j++;
			last = i + 1;
			counter--;
		}
		i++;
	}
	split[j] = 0;
	free(buffer);
	return (split);
}
