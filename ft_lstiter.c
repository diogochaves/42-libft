// DESCRIPTION
// Iterates the list LST and applies the function F to the content of each
// element.

// PARAMETERS
// #1. The adress of a pointer to an element.
// #2. The adress of the function used to iterate on the list.

// RETURN VALUE
// -

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
