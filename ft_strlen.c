// strlen()
// calculates the length of the string pointed to by s,
// excluding the terminating null byte ('\0').

#include "libft.h"

size_t ft_strlen(const char *s)
{
	char *p;

	p = s;
	while (*p)
		p++;
	return (p - s);
}
