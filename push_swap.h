/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucankir <mucankir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:53:06 by mucankir          #+#    #+#             */
/*   Updated: 2025/02/19 18:53:07 by mucankir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

typedef struct s_stack
{
	int	*a;
	int	*b;

	int	size_a;
	int	size_b;

}		t_stack;

//Moves
void 	pa(t_stack *stack);
void 	pb(t_stack *stack);
void 	sa(t_stack *stack);
void 	sb(t_stack *stack);
void 	ss(t_stack *stack);
void 	ra(t_stack *stack);
void 	rb(t_stack *stack);
void 	rr(t_stack *stack);
void 	rra(t_stack *stack);
void 	rrb(t_stack *stack);
void	rrr(t_stack *stack);


//Sortings
void 	sort_three(t_stack *stack);
void	sort_stack(t_stack *stack);
void	quick_sort(t_stack *stack);

//Utils
int		ft_isdigit(char c);
int		ft_strlen(const char *s);
int 	get_median(int *arr, int size);
int		ft_strcmp(const char *s1, const char *s2);
int 	*bubble_sort(int *arr, int size);

long	ft_atoi(const char *str);

char	*ft_strdup(const char *s1);
char	**ft_split(const char *s, char c);
char 	*ft_strjoin(char *s1, char *s2);

void 	check_args_limits(char **args, int ac);
void 	check_duplicate(char **args, int ac);
void 	check_isdigit(char **args);
void	print_error(char *error);
void 	check_args(char **args, int ac);
void 	free_args(char *joined, char **args);

//Stack
int 	is_sorted(t_stack *stack);

void 	free_stack(t_stack *stack);
void 	init_stack(t_stack *stack, char **args, int ac);

#endif