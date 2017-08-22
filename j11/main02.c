#include <stdlib.h>
#include "ft_list.h"

int		main()
{
	t_list		*begin_list;
	int			tab[5] = {0, -52, 54, 0, 78};

	begin_list = (t_list*)malloc(sizeof(t_list));
	begin_list->next = NULL;
	for (int i = 0; i < 5; i++)
		ft_list_push_front(&begin_list, tab[i]);
	begin_list = begin_list->next;
	while (begin_list != NULL)
	{
		printf("%d\n",begin_list->data);
		begin_list = begin_list->next;
	}
	return (0);
}
