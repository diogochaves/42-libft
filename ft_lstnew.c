// ft_lstnew
//
// Allocates (with malloc(3)) and returns a new element. The variable ’content’
// is initialized with the value of the parameter ’content’. The variable
// ’next’ is initialized to NULL.

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
