/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 21:22:32 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/17 22:50:21 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#define BUF_SIZE 10000

int		main(void)
{
	char		buf[BUF_SIZE + 1];
	int			ret;
	int			counter;
	char		*ptr;

	ret = 0;
	counter = 0;
	ptr = buf;
	ret = read(0, ptr, BUF_SIZE);
	while (ret)
	{
		counter += ret;
		ptr = ptr + ret;
		ret = read(0, ptr, BUF_SIZE);
	}
	buf[counter] = '\0';
	is_rush(get_width(buf), get_height(buf), buf);
	ft_putstr("\n");
	return (0);
}
