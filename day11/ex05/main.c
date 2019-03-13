#include <stdio.h>
#include "ft_list.h"

int	main(int argc, char **argv)
{
	t_list	*first_elem;
	int	i;

	i = 0;
	first_elem = ft_list_push_params(argc, argv);
	while (i < argc)
	{
		printf("elem #%d data: %s\n", i, (char *)first_elem->data);
		first_elem = first_elem->next;
		i++;
	}
	return (0);
}
