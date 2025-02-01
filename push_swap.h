/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 03:45:47 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/01/25 03:45:50 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
// # include "ft_printf.h"

typedef struct s_stack
{
	int				data;
	//int				index;
	struct s_stack	*next;
}					t_stack;

int			ft_atoi(const char *str);
char		**ft_split(const char *str, char c);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlen(const char *s);
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
char		*ft_strdup(const char *s1);
void		*ft_memcpy(void *dst, const void *src, size_t n);
int			check_if_nbr(char **av, int ac);
char		**join_split_arg(int ac, char **av);
void		free_split(char **str_str);
int			*atoi_av(int ac, char *av[]);
int			*bubble_sort(int *arr, int ac);
int			check_if_dup(char **av, int ac);
int			ft_strcmp(const char *s1, const char *s2);
void		ft_swap(int *a, int *b);
void		check_errors(int ac, char *av[]);
void		ft_print_node(t_stack *head);
void		ft_lstadd_front(t_stack **lst, t_stack *new);
void		add_node(t_stack *head, int new_data);
t_stack		*ft_lstnew(int content);
void		ft_lstclear(t_stack **lst);
void		ft_stack_a(int ac, char *av[], t_stack *head_a);
void		ft_stack_b(t_stack **head_a, t_stack **head_b);
//-----------------actions-------------
void		sa(t_stack **head);
// void		sb(t_stack **head_b);
// void		ss(t_stack **head_a, t_stack **head_b)
void		pb(t_stack **head_a, t_stack **head_b);
#endif
