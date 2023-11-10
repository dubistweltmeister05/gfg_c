#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void roots(int a, int b, int c)
{
    long D = (b * b) - (4 * a * c);
    double s_D = sqrt(abs(D));
    if (D > 0)
    {
        printf("The roots are real and not repeated:- \n");
        printf("%f \n %f", (double)((-b + s_D) / (2 * a)), (double)((-b - s_D) / (2 * a)));
    }
    if (D == 0)
    {
        printf("The roots are real and repeated:- \n");
        printf("%f \n %f", (double)((-b) / (2 * a)), (double)((-b) / (2 * a)));
    }
    if (D < 0)
    {
        printf("The roots are complex\n ");
        printf("%f + i%f\n %f - i%f", (double)(-b) / (2 * a), (double)(s_D) / (2 * a), (double)(-b) / (2 * a), (double)(s_D) / (2 * a));
    }
}

int main()
{
    int a, b, c;
    printf("Enter the coefficients of the quadratic in descending powers of the variable:- \n");
    scanf("%d %d %d", &a, &b, &c);
    roots(a, b, c);

    return 0;
}