#include <stdio.h>

int main(void)
{
    int choice = 0;
    int calc = 1;
    int a;
    int b;
    int sum;
    printf("Simple Calculator\n");
    printf("\n");
    while (calc == 1)
    {
        printf("Choice: %d\n", choice);
        printf("1) Add\n");
        printf("2) Subtract\n");
        printf("3) Multiply\n");
        printf("4) Divide\n");
        printf("0) Quit\n");

        scanf("%d", &choice);
        if (choice > 4)
        {
            printf("Invalid choice\n");
        }
        if (choice == 0)
        {
            printf("Bye!\n");
            calc = 0;
        }
        if (choice == 1)
        {
            printf("enter number for A:\n");
            scanf("%d", &a);
            printf("enter number for B:\n");
            scanf("%d", &b);
            sum = a + b;
            printf("Result: %d\n", sum);
            calc = 0;
        }
        
    }
    return (0);
}
