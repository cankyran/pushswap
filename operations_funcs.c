#include "push_swap.h"
#include <unistd.h>

void pa(t_stack *stack)
{
    int i;

    if (stack->size_b == 0) 
        return;
        
    i = stack->size_a;
    while (i > 0)
    {
        stack->a[i] = stack->a[i - 1];
        i--;
    }
    stack->a[0] = stack->b[0];
    
    i = 0;
    while (i < stack->size_b - 1)
    {
        stack->b[i] = stack->b[i + 1];
        i++;
    }
    stack->size_b--;
    stack->size_a++;
    write(1, "pa\n", 3);
}

void pb(t_stack *stack)
{
    int i;

    if (stack->size_a == 0) 
        return;
        
    i = stack->size_b;
    while (i > 0)
    {
        stack->b[i] = stack->b[i - 1];
        i--;
    }
    stack->b[0] = stack->a[0];
    
    i = 0;
    while (i < stack->size_a - 1)
    {
        stack->a[i] = stack->a[i + 1];
        i++;
    }
    stack->size_a--;
    stack->size_b++;
    write(1, "pb\n", 3);
}

void sa(t_stack *stack)
{
    int temp;

    if (stack->size_a < 2)
        return;
    temp = stack->a[0];
    stack->a[0] = stack->a[1];
    stack->a[1] = temp;
    write(1, "sa\n", 3);
}

void sb(t_stack *stack)
{
    int temp;

    if (stack->size_b < 2)
        return;
    temp = stack->b[0];
    stack->b[0] = stack->b[1];
    stack->b[1] = temp;
    write(1, "sb\n", 3);
}

void ss(t_stack *stack)
{
    sa(stack);
    sb(stack);
    write(1, "ss\n", 3);
}

void ra(t_stack *stack)
{
    int i;
    int temp;

    if (stack->size_a < 2)
        return;
    temp = stack->a[0];
    i = 0;
    while (i < stack->size_a - 1)
    {
        stack->a[i] = stack->a[i + 1];
        i++;
    }
    stack->a[stack->size_a - 1] = temp;
    write(1, "ra\n", 3);
}

void rb(t_stack *stack)
{
    int i;
    int temp;

    if (stack->size_b < 2)
        return;
    temp = stack->b[0];
    i = 0;
    while (i < stack->size_b - 1)
    {
        stack->b[i] = stack->b[i + 1];
        i++;
    }
    stack->b[stack->size_b - 1] = temp;
    write(1, "rb\n", 3);
}

void rr(t_stack *stack)
{
    ra(stack);
    rb(stack);
    write(1, "rr\n", 3);
}

void rra(t_stack *stack)
{
    int i;
    int temp;

    if (stack->size_a < 2)
        return;
    temp = stack->a[stack->size_a - 1];
    i = stack->size_a - 1;
    while (i > 0)
    {
        stack->a[i] = stack->a[i - 1];
        i--;
    }
    stack->a[0] = temp;
    write(1, "rra\n", 4);
}

void rrb(t_stack *stack)
{
    int i;
    int temp;

    if (stack->size_b < 2)
        return;
    temp = stack->b[stack->size_b - 1];
    i = stack->size_b - 1;
    while (i > 0)
    {
        stack->b[i] = stack->b[i - 1];
        i--;
    }
    stack->b[0] = temp;
    write(1, "rrb\n", 4);
}

void rrr(t_stack *stack)
{
    rra(stack);
    rrb(stack);
    write(1, "rrr\n", 4);
}
