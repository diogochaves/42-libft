// DESCRIPTION
// Deletes and frees the given element and every successor of that element,
// using the function DEL and free(3). Finally, the pointer to the list must
// be set to NULL.

// PARAMETERS
// #1. The adress of a pointer to an element.
// #2. The adress of the function used to delete the content of the element.

// RETURN VALUE
// -

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
	lst = 0;
}
