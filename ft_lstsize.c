// ft_lstsize
//
// Counts the number of elements in a list.

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 1;
	if (!lst)
		return (0);
	while(lst->next)
	{
		count++;
		lst++;
	}
	return (count);
}
