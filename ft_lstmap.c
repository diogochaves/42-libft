// DESCRIPTION: Iterates the list ’lst’ and applies the function ’f’ to the
// content of each element. Creates a newlist resulting of the successive
// applications of the function ’f’. The ’del’ function is used to delete the
// content of an element if needed.
//
// PARAMETERS:
// #1. The adress of a pointer to an element.
// #2. The adress of the function used to iterate on the list.
// #3. The adress of the function used to delete the content of an element if
// needed.
//
// RETURN VALUE:
// The new list. NULL if the allocation fails.

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_cpy;

	ft_lstiter(lst, *(*f));
	return (0);
}
