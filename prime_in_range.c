#include <stdio.h>

int is_prime(int k);

int main()

{
    int initial, final;
    printf("Enter the range of numbers\n");
    scanf("%d %d", &initial, &final);

    for (int i = initial; i <= final; i++)
    {
        if (is_prime(i))
            printf("%d\n", i);
    }
    return 0;
}

int is_prime(int k)
{
    int flag = 0;
    for (int i = 2; i < k; i++)
    {
        if ((k % i) == 0)
        {
            flag = 1;
        }
    }
    if (flag)
    {
        return 0;
    }
    else
        return 1;
}