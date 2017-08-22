#include "ft_list.h"
#include <stdlib.h>

int             cmp(void *data, void *ref)
{
	return (data - ref);
}

int             main()
{
	t_list      *begin_list;
	int         tab[6] = {0, -52, 54, 0, 78};

	begin_list = ft_create_elem(NULL);
	for (int i = 0; i < 5; i++)
		ft_list_push_back(&begin_list, tab[i]);
	ft_list_sort(&begin_list, &cmp);
	begin_list = begin_list->next;
	while (begin_list != NULL)
	{
		printf("%d\n",begin_list->data);
		begin_list = begin_list->next;
	}
	return (0);
}
