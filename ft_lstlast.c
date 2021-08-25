// ft_lstlast
//
// Returns the last element of the list.

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next)
		lst++;
	return (lst);
}
