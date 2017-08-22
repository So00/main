#include "ft_list.h"
#include <stdlib.h>
	
int			main(int ac, char **av)
{
	t_list			*begin_list;

	begin_list = (t_list*)malloc(sizeof(t_list));
	begin_list->next = ft_list_push_params(ac, av);
	begin_list = begin_list->next;
	while (begin_list != NULL)
	{
		printf("%s\n",begin_list->data);
		begin_list = begin_list->next;
	}
	return (0);
}
