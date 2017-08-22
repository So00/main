#include "ft_list.h"
#include <stdlib.h>

int			main()
{
	t_list		*first;
	
	first = ft_create_elem("Ceci est une phrase");
	printf("%s", first->data);
	return (0);
}
