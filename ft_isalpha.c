// Checks  for  an  alphabetic  character;  in the standard "C" locale, it is
// equivalent to (isupper(c) || islower(c)).
// In some locales, there may be additional characters for which isalpha() is
// true—letters which are neither uppercase nor lowercase.

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
