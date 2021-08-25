// ft_lstdelone
//
// Takes as a parameter an element and frees the memory of the element’s
// content using the function ’del’ given as a parameter and free the element.
// The memory of ’next’ must not be freed.

// TODO: check free / delete

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*lst_free;

	lst_free = lst->next;
	del(lst->content);
	free(lst);
	lst = lst_free;
}
