#include "push_swap.h"

void init_stack(t_stack *stack, char **args, int ac)
{
    int i;

    stack->size_a = ac;
    stack->size_b = 0;
    stack->a = malloc(sizeof(int) * ac);
    stack->b = malloc(sizeof(int) * ac);
    if (!stack->a || !stack->b)
    {
        free_stack(stack);
        print_error("Error\n");
    }
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
char *join_args(char *joined, char **av, int ac)
{
    char *temp; 
    
    joined = ft_strdup("");
    if (!joined)
        return (NULL);
    while (ac > 0)
    {
        temp = ft_strjoin(joined, *av);
        if (!temp)
            return (NULL);
        free(joined);
        joined = temp;
        if (ac > 1)
        {
            temp = ft_strjoin(joined, " ");
            if (!temp)
                return (NULL);  
            free(joined);
            joined = temp;
        }
        av++;
        ac--;
    }
    return (joined);
}
int	main(int ac, char **av)
{
    t_stack stack; 
    char *joined = NULL;
    char **args = NULL;

    if (ac < 2)
        return (1);
    av++;
    ac--;
    joined = join_args(joined, av, ac);
    if (!joined)
        print_error("Error\n");
    args = ft_split(joined, ' ');
    if (!args)
    {
        free(joined); 
        print_error("Error\n");
    }
	ac = len_args(args);
    free(joined);
    check_args(args, ac);
    init_stack(&stack, args, ac);
    sort_stack(&stack);    
    free_stack(&stack);
    free_args(NULL, args);
    return (0);
}
