#include <stdio.h>


int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	printf("N: %zu | s1: %i | s2: %i\n", n, (unsigned int)*s1, (unsigned int)*s2);
	while (n--)
	{
		if ((unsigned char *)s1 - (unsigned char *)s2)
			return ((unsigned char *)s1 - (unsigned char *)s2) ;
		s1++;
		s2++;
	}
	return (0);
}

void	check(int i)
{
	printf("%d\n", i);
}

int	main(void)
{
	char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	/* 1 */ check(!ft_memcmp(s, sCpy, 4));
	/* 2 */ check(!ft_memcmp(s, s2, 0));
	/* 3 */ check(ft_memcmp(s, s2, 1) > 0);
	/* 4 */ check(ft_memcmp(s2, s, 1) < 0);
	/* 5 */ check(ft_memcmp(s2, s3, 4) != 0);
	return (0);
}
