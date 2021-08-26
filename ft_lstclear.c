// ft_lstclear
//
// Deletes and frees the given element and every successor of that element,
// using the function ’del’ and free(3). Finally, the pointer to the list must
// be set to NULL.

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
