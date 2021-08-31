// DESCRIPTION
// Allocates (with malloc(3)) and returns a new element. The variable CONTENT
// is initialized with the value of the parameter CONTENT. The variable
// NEXT is initialized to NULL.

// PARAMETERS
// #1. The content to create the new element with.

// RETURN VALUE
// The new element.

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*item;

	item = malloc(sizeof(t_list));
	if (!item)
		return (0);
	item->content = content;
	item->next = 0;
	return (item);
}
