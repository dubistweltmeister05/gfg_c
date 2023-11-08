#include <stdio.h>

int fibo(int a)
{
    if (a == 0)
    {
        return 0;
    }
    if (a == 2 | a == 1)
    {
        return 1;
    }
    else
    {
        return (fibo(a - 1) + fibo(a - 2));
    }
}

int main()
{
    int a;
    printf("Enter the number of terms needed ");
    scanf("%d", &a);
    for (int t = 0; t <= a; t++)
    {
        printf("%d\n", fibo(t));
    }
    return 0;
}