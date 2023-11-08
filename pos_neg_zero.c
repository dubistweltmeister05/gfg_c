#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a < 0)
        printf("The number is negative");
    else if (a > 0)
        printf("The number is positive");
    else
        printf("The number is 0");
    return 0;
}