#include <stdio.h>
#include <stdlib.h>

const int N = 5;

int get_int(char *s);

int main(void)
{
    // Getting input of n
    int a = get_int("Enter the stuff you wanna enter: ");
    
    int b = get_int("Enter the stuff you wanna enter: ");
    
    // Printing out n
    printf("%i\n", a);
    printf("%i\n", b);
}

int get_int(char *s)
{
    int num;
    printf("%s", s);
    scanf("%i", &num);
    return num;
}