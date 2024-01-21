#include <stdio.h>

void print_nos(int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("%d\t", i);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    print_nos(n);

    return 0;
}