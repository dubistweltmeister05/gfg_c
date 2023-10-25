#include <stdio.h>
#include <math.h>

int main()
{
    int x, flag = 0;
    scanf("%d", &x);

    for (int i = 2; i < sqrt(x); i++)
    {
        if (x % i == 0)
        {
            flag = 1;
        }
    }
    if (flag)
    {
        printf("The number is not a prime");
    }
    else
    {
        printf("The number is a prime");
    }
    return 0;
}