/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 16:24:46 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/05 12:50:23 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_putstr(argv[1]);
	}
	return (0);
}
