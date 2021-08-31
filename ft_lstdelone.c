// DESCRIPTION
// Takes as a parameter an element and frees the memory of the element’s
// content using the function DEL given as a parameter and free the element.
// The memory of NEXT must not be freed.

// PARAMETERS
// #1. The element to free.
// #2. The address of the function used to delete the content.

// RETURN VALUE
// -

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
