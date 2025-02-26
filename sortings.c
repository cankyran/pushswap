#include "push_swap.h"

void sort_three(t_stack *stack)
{
    if (stack->a[0] > stack->a[1] && stack->a[1] < stack->a[2] && stack->a[0] < stack->a[2])
        sa(stack);
    else if (stack->a[0] > stack->a[1] && stack->a[1] > stack->a[2])
    {
        sa(stack);
        rra(stack);
    }
    else if (stack->a[0] > stack->a[1] && stack->a[1] < stack->a[2] && stack->a[0] > stack->a[2])
        ra(stack);
    else if (stack->a[0] < stack->a[1] && stack->a[1] > stack->a[2] && stack->a[0] < stack->a[2])
    {
        sa(stack);
        ra(stack);
    }
    else if (stack->a[0] < stack->a[1] && stack->a[1] > stack->a[2] && stack->a[0] > stack->a[2])
        rra(stack);
}
       
int get_median(int *arr, int size)
{
    int i;
    int j;
    int temp;

    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size - 1)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
    return (arr[size / 2]);
}


void quick_sort(t_stack *stack)
{
    int i;
    int size;
    int pivot;

    if (stack->size_a <= 1)
        return;
    
    pivot = get_median(stack->a, stack->size_a);
    size = stack->size_a;
   
    i = 0;
    while (i < size)
    {
        if (stack->a[0] < pivot)
            pb(stack);
        else
            ra(stack);
        i++;
    }
    quick_sort(stack);

    while (stack->size_b > 0)
        pa(stack);
}
void sort_stack(t_stack *stack)
{
    if (stack->size_a == 1 && stack->size_b == 0)
        return;
    if (stack->size_a == 2 && stack->a[0] > stack->a[1] && stack->size_b == 0)
        sa(stack);
    else if (stack->size_a == 3)
        sort_three(stack);
    else
        quick_sort(stack);
}
