// ft_lstdelone
//
// Takes as a parameter an element and frees the memory of the element’s
// content using the function ’del’ given as a parameter and free the element.
// The memory of ’next’ must not be freed.

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
