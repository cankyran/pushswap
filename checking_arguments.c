#include  "push_swap.h"

void check_isdigit(char **args)
{
    int i;
    int j;

    i = 0;
    while (args[i])
    {
        j = 0;
        while (args[i][j])
        {   
            if (args[i][j] == '-' || args[i][j] == '+')
            {
                if (!args[i][j + 1] || args[i][j + 1] == '0')
                {
                    free_args(NULL, args);
                    print_error("Error\n");
                }
                j++;
            }
            if (!ft_isdigit(args[i][j]))
            {
                free_args(NULL, args);
                print_error("Error\n");
            }
            j++;
        }
        i++;
    }
}

void check_duplicate(char **args, int ac)
{
    int i;
    int j;

    i = 0;
    while (i < ac)
    {
        j = i + 1;
        while (j < ac)
        {
            if (ft_strcmp(args[i], args[j]) == 0)
            {
                free_args(NULL, args);
                print_error("Error\n");
            }
            j++;
        }
        i++;
    }
}

void check_args_limits(char **args, int ac)
{
    int i;
    long long temp;

    i = 0;
    while (i < ac)
    {
        temp = ft_atoi(args[i]);
        if (temp > 2147483647 || temp < -2147483648)
        {
            free_args(NULL, args);
            print_error("Error\n");
        }
        i++;
     }
}

void check_args(char **args, int ac)
{
    check_isdigit(args);
    check_duplicate(args, ac);
    check_args_limits(args, ac);
}
