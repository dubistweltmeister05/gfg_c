// C program to check given number
// is Armstrong number or not
// using Functions
#include <stdio.h>

// math.h is used for pow function.
#include <math.h>

// Function to calculate
// order of the number
int order(int x)
{
    int n = 0;
    while (x)
    {
        n++;
        x = x / 10;
    }
    return n;
}

// Function to check whether the
// given number is Armstrong
// number or not
int isArmstrong(int x)
{
    // Calling order function
    int n = order(x);
    int temp = x, sum = 0;
    while (temp)
    {
        int r = temp % 10;
        sum += pow(r, n);
        temp = temp / 10;
    }

    // If satisfies Armstrong condition
    if (sum == x)
        return 1;
    else
        return 0;
}

// Driver Program
int main()
{
    int x = 153;
    if (isArmstrong(x) == 1)
        printf("True\n");
    else
        printf("False\n");

    x = 1253;
    if (isArmstrong(x) == 1)
        printf("True\n");                                                                                                                                                           
    else
        printf("False\n");

    return 0;
}
