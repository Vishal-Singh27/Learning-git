#include <stdio.h>
#include <stdlib.h>

const int N = 5;

int get_int(char *s);

int main(void)
{
    // Getting input of n
    int n = get_int("Enter the stuff you wanna enter: ");

    // Printing out n
    printf("%i\n", n);
}

int get_int(char *s)
{
    int num;
    printf("%s", s);
    scanf("%i", &num);
    return num;
}