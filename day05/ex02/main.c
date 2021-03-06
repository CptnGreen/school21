/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 12:57:09 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/05 15:58:13 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str);

int		main(int argc, char **argv)
{
	printf("or_atoi: %d\n", atoi("  	\v\n\f\r\t23"));
	printf("ft_atoi: %d\n", ft_atoi("  	\v\n\f\r\t23"));
	if (argc > 1)
	{
		printf("or_atoi: %d\n", atoi(argv[1]));
		printf("ft_atoi: %d\n", ft_atoi(argv[1]));
	}
	return (0);
}
