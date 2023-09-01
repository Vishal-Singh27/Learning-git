#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

typedef struct node
{
    struct node *back;
    int num;
    struct node *next;
}
node;

int main(void)
{
    node *Node = malloc(sizeof(node));
    node *start = Node;
    node *end;
    char tmp[20];
    int sum = 0;
    int i;

    while (1)
    {
        printf("Enter the next number (type 'Stop' to stop adding numbers): ");
        scanf("%s", tmp);
        if (strcmp(tmp, "Stop") == 0)
        {
            Node->next = NULL;
            break;
        }

        Node->next = malloc(sizeof(node));
        Node->next->back = Node;
        Node = Node->next;
        Node->num = atoi(tmp);
    }

    Node = start;

    while (Node != NULL)
    {
        sum += Node->num;
        Node = Node->next;
    }

    printf("Sum: %i\n", sum);
}