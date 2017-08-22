/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 23:00:26 by atourner          #+#    #+#             */
/*   Updated: 2017/08/22 10:16:37 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list t_list;

struct			s_list
{
	t_list				*next;
	void				*data;
};

t_list					*ft_create_elem(void *data);
void					ft_list_push_back(t_list**, void*);
void					ft_list_push_front(t_list**, void*);
int						ft_list_size(t_list*);
t_list					*ft_list_last(t_list*);
t_list					*ft_list_at(t_list*, unsigned int);
void					ft_list_reverse(t_list**);
void					ft_list_foreach(t_list*, void(*f)(void*));
t_list					*ft_list_find(t_list*,void*,int(*cmp));
t_list					ft_sorted_list_insert(t_list**, void*, int (*cmp)());
t_list					*ft_list_push_params(int ac, char **av);
t_list					ft_list_clear(t_list **begin);
void					ft_list_foreach_if(t_list*, void(*f)(void *), void*, int (*cmp)());
void					ft_list_remove_if(t_list**,void*,int(*cmp)());
void					ft_list_reverse_fun(t_list**);

#endif
