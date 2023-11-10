#include <stdio.h>

int check_prime(int n)
{
    if (n == 0 || n == 1)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter the number to be checked:- ");
    scanf("%d", &n);
    for (int i = 2; i < n / 2; i++)
    {
        if (check_prime(i) && check_prime(n - i))
        {
            printf("Yes, the number can be expressed as the sum of the primes %d & %d \n", i, (n - i));
        }
    }
    return 0;
}