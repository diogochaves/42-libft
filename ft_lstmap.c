// DESCRIPTION
// Iterates the list LST and applies the function F to the content of each
// element. Creates a newlist resulting of the successive applications of the
// function F. The DEL function is used to delete the content of an element
// if needed.

// PARAMETERS
// #1. The adress of a pointer to an element.
// #2. The adress of the function used to iterate on the list.
// #3. The adress of the function used to delete the content of an element if
// needed.

// RETURN VALUE
// The new list. NULL if the allocation fails.

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_cpy;
	t_list	**lst_start;

	while (lst)
	{
		lst_cpy = ft_lstnew(f(lst->content));
		ft_lstadd_back(lst_start, lst_cpy);
		lst = lst->next;
	}
	return (lst_start);
}
