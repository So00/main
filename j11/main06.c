#include "ft_list.h"
#include <stdlib.h>

int			main()
{
	t_list		*begin_list;
	int			tab[6] = {15, -52, 54, 0, 78};
	t_list		*save;

	begin_list = ft_create_elem(NULL);
	for (int i = 0; i < 5; i++)
		ft_list_push_back(&begin_list, tab[i]);
	save = begin_list->next->next->next;
	ft_list_clear(&begin_list);
	if (begin_list->next == NULL)
		printf("IT WORKS");
	return (0);
}
