// ft_itoa
//
// Allocates (with malloc(3)) and returns a string representing the integer
// received as an argument. Negative numbers must be handled.

#include "libft.h"

char	*ft_itoa(int n)
{
	int		neg;
	int 	sign;
	int		num;
	int		dig;
	char	*num_str;

	neg = 0;
	sign = 1;
	num = n;
	dig = 1;
	if (num < 0)
	{
		neg = 1;
		sign = -1;
	}
	while (num != 0)
	{
		num = num / 10;
		if (num != 0)
			dig++;
	}
	num_str = malloc(neg + dig + 1);
	if (!num_str)
		return (0);
	num_str[neg + dig] = '\0';
	num = n;
	while (dig)
	{
		num_str[neg + dig -1] = (num % 10) * sign + '0';
		num = num / 10;
		dig--;
	}
	if (neg)
		num_str[0] = '-';
	return (num_str);
}
