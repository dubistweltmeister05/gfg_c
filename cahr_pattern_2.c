#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows : - ");
    scanf("%d", &rows);
    int f = 0;
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", (char)(f + 65));
            f++;
        }

        printf("\n");
    }
    return 0;
}