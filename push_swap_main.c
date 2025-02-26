#include "push_swap.h"

void init_stack(t_stack *stack, char **args, int ac)
{
    int i;

    stack->size_a = ac;
    stack->size_b = 0;
    stack->a = malloc(sizeof(int) * ac);
    stack->b = malloc(sizeof(int) * ac);
    i = 0;
    while (i < ac)
    {
        stack->a[i] = ft_atoi(args[i]);
        i++;
    }
}


int len_args(char **args)
{
	int i;

	i = 0;
	while (args[i])
		i++;
	return (i);
}
char *join_args(char *args, char **av, int ac)
{
    char *temp;
    char *space = " "; 
    
    args = ft_strdup("");
    while (ac > 0)
    {
        temp = ft_strjoin(args, *av);
        free(args);
        args = temp;
        if (ac > 1)
        {
            temp = ft_strjoin(args, space);
            free(args);
            args = temp;
        }
        av++;
        ac--;
    }
    return (args);
}
int	main(int ac, char **av)
{
    t_stack stack; 
    char *joined = NULL;
    char **args = NULL;

    if (ac < 2)
        return (1);

    if (ac >= 2)
    {
        av++;
        ac--;
        joined = join_args(joined, av, ac);
    }
    args = ft_split(joined, ' ');
	ac = len_args(args);
    free(joined);
    check_args(args, ac);
    init_stack(&stack, args, ac);
    sort_stack(&stack);    
    free_stack(&stack);
    free_args(NULL, args, 1);
    return (0);
}
