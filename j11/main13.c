#include "ft_list.h"
#include <stdlib.h>

int             main()
{
	t_list      *begin_list, *begin_list2;
	int         tab[6] = {0, -52, 54, 0, 78};
	int			tab2[6] = {1, 2, 3, 4, 5};

	begin_list = ft_create_elem(NULL);
	begin_list2 = ft_create_elem(NULL);
	for (int i = 0; i < 5; i++)
		ft_list_push_back(&begin_list, tab[i]);
	for (int i = 0; i < 5; i++)
		ft_list_push_back(&begin_list2, tab2[i]);
	ft_list_merge(&begin_list, begin_list2);
	begin_list = begin_list->next;
	while (begin_list != NULL)
	{
		printf("%d\n",begin_list->data);
		begin_list = begin_list->next;
	}
	return (0);
}
