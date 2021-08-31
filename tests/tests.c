#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*marker;
	size_t	i;

	marker = (char *)big;
	i = 0;
	while (*big && len-- > 0 && little[i])
	{
		printf("%c | ", *big );
		if (*big == little[i++])
		{
			printf("%c\n", *big );
			if (!marker)
				marker = (char *)big;
		}
		else
		{
			printf("\n" );
			marker = 0;
			i = 0;
			if (*big == little[i])
			{
				marker = (char *)big;
				i++;
			}
		}
		big++;
		printf("%zu\n", i );
	}
	if (!little[i])
		return (marker);
	return (0);
}

void	check(int i)
{
	printf("%d\n", i);
}

int	main(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char * empty = (char*)"";
/* 10 */ check(ft_strnstr(haystack, "abcd", 9) == haystack + 5);
	return (0);
}
