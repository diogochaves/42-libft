// DESCRIPTION
// Adds the element NEW at the end of the list.

// PARAMETERS
// #1. The address of a pointer to the first link of a list.
// #2. The address of a pointer to the element to be added to the list.

// RETURN VALUE
// -

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	last->next = new;
}
