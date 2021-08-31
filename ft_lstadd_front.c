// DESCRIPTION
// Adds the element NEW at the beginning of the list.

// PARAMETERS
// #1. The address of a pointer to the first link of a list.
// #2. The address of a pointer to the element to be added to the list.

// RETURN VALUE
// -

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
