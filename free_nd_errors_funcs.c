/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_nd_error_funcs.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucankir <mucankir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:53:18 by mucankir          #+#    #+#             */
/*   Updated: 2025/02/19 18:53:19 by mucankir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "push_swap.h"
#include    <unistd.h>

void free_args(char *joined, char **args, int flag)
{
    int i;

    i = 0;
    if (flag == 1)
    {
        while (args[i])
        {
            free(args[i]);
            i++;
        }
        free(args);
        if (joined)
            free(joined);
    }
    else
    {
        if (joined)
            free(joined);
    }
}
void    free_stack(t_stack *stack)
{
    if (stack->a)
        free(stack->a);
    if (stack->b)
        free(stack->b);
}
void	print_error(char *error)
{
    write(2, error,ft_strlen(error));
    exit(1);
}