// DESCRIPTION
// Returns the last element of the list.

// PARAMETERS
// #1. The beginning of the list.

// RETURN VALUE
// Last element of the list.

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next)
		lst = lst->next;
	return (lst);
}
