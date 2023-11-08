#include <math.h>
#include <stdio.h>

int main()
{
    int i, sum, num, count = 0;
    int initial, final;
    printf("Enter the range of numbers");
    scanf("%d %d", &initial, &final);
    printf("All Armstrong number between %d and %d are:\n", initial, final);

    // This loop will run for 1 to 1000
    for (i = initial; i <= final; i++)
    {
        num = i;
        // Count number of digits.
        while (num != 0)
        {
            num /= 10;
            count++;
        }
        num = i;
        sum = pow(num % 10, count) + pow((num % 100 - num % 10) / 10, count) + pow((num % 1000 - num % 100) / 100, count);
        // Check for Armstrong Number
        if (sum == i)
        {
            printf("%d ", i);
        }
        count = 0;
    }
}