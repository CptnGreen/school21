/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 22:39:07 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/13 22:44:26 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct			s_list
{
	struct s_list		*next;
	void				*data;
}						t_list;

t_list					*ft_create_elem(void *data);
void					ft_list_push_back(t_list **begin_list, void *data);
t_list					*ft_list_at(t_list *begin_list, unsigned int nbr);
t_list					*ft_list_push_params(int ac, char **av);

#endif
