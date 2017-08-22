#include "ft_list.h"
#include <stdlib.h>

int			main()
{
	t_list		*begin_list;
	int			tab[6] = {0, -52, 54, 0, 78};

	begin_list = ft_create_elem(NULL);
	for (int i = 0; i < 5; i++)
		ft_list_push_back(&begin_list, tab[i]);
	printf("%d",ft_list_size(begin_list));
	return (0);
}
