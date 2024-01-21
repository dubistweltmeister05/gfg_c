#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the two numbers");
    scanf("%d %d", &a, &b);

    int max = (a > b) ? a : b;

    // While loop to check if max variable
    // is divisible by x and y
    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            printf("The LCM of %d and %d is %d.", a, b,
                   max);
            break;
        }

        ++max;
    }
    return 0;
}