#include <stdio.h>
int main()
{
    float f;
    scanf("%f", &f);
    printf("%f", ((f - 32) * 5 / 9));
    return 0;
}