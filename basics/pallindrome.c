#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    int rev = 0;
    int rem = 0;
    int temp = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (rev == temp)
        printf("The number %d is a pallindriome", temp);
    else
        printf("The number %d is not a pallindrome", temp);
    return 0;
}