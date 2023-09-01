#include <stdio.h>
#include <stdarg.h>

int get_sum(int count, ...);

int main(void)
{
    printf("%i", get_sum(5, 2, 5, 6, 5, 1));
}

int get_sum(int count, ...)
{
    va_list list;
    
    va_start(list, count);

    int sum = 0;

    for (int i = 0; i < count; i++)
    {
        sum += va_arg(list, int);
    }
    return sum;
}