#include <stdio.h>
#include <string.h>
int main()
{
    int num;
    printf("Enter a number \n");
    scanf("%d", &num);

    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}