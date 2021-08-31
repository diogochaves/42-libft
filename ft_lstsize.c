// DESCRIPTION
// Counts the number of elements in a list.

// PARAMETERS
// #1. The beginning of the list.

// RETURN VALUE
// Length of the list.

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
