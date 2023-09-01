#include <stdio.h>
#include <stdlib.h>

const int N = 5;

int get_int(char *s)

int main(void)
{
    int n = get_int("Enter %i stuff: ", 3);
    printf("%i", n)
}

int get_int(char *s)
{
    int num;
    printf("%s", s);
    scanf("%i", &num);
    return num
}