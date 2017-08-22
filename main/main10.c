#include "ft_list.h"
#include <stdlib.h>

void			add_one(void *actual)
{
	printf("%d",actual);
}

int				cmp(void *data, void *data_ref)
{
	if ((int*)data_ref - (int*)data == 0)
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
	ft_list_foreach_if(begin_list, &add_one, -52, &cmp);
	return (0);
}
