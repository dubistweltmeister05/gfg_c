#include <stdio.h>

void tables(int a, int b)
{
    for (int i = 1; i <= b; i++)
    {
        printf("%d\n", a * i);
    }
}

int main()
{
    int a, b;
    printf("Enter the base number");
    scanf("%d", &a);

    printf("Enter the number till which the multiples have to be calculated?");
    scanf("%d", &b);

    tables(a, b);

    return 0;
}