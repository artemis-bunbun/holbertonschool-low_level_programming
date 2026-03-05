#include <stdio.h>

int main(void)
{
    int choice = 0;

    printf("Simple Calculator\n");
    printf("\n");
    printf("1) Add\n");
    printf("2) Subtract\n");
    printf("3) Multiply\n");
    printf("4) Divide\n");
    printf("0) Quit\n");
    scanf("%d", &choice);
    printf("\n");
    printf("Choice: %d", choice);
    printf("\n");
    return (0);
}
