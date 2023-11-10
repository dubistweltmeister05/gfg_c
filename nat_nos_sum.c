#include <stdio.h>

int nat_sum(int n)
{
    if (n < 1)
    {
        return n;
    }
    else
    {
        return (n + nat_sum(n - 1));
    }
}

int main()
{
    int num;
    printf("Enter the number till which you want to find the sum :- \n");
    scanf("%d", &num);
    printf("the sum is :- %d", nat_sum(num));
    return 0;
}