#include "ft_list.h"
#include <stdlib.h>

int				cmp(void *data, void *data2)
{
	if ((int)data == (int)data2)
		return(0);
	return (1);
}

int				main()
{
	t_list		*begin_list;
	int			tab[6] = {0, -52, 54, 0, 78};

	begin_list = ft_create_elem(NULL);
	for (int i = 0; i < 5; i++)
		ft_list_push_back(&begin_list, tab[i]);
	begin_list = ft_list_find(begin_list, 54, &cmp);
	if (begin_list != NULL)
		printf("%d", begin_list->data);
	return (0);
}
