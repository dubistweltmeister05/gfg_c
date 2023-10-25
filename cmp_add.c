#include <stdio.h>
typedef struct cmplx
{
    int real;
    int fake;
};

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    struct cmplx c1, c2, c3;
    c1.real = a;
    c1.fake = b;

    c2.real = c;
    c2.fake = d;

    c3.real = c1.real + c2.real;
    c3.fake = c1.fake + c2.fake;

    printf("%d %d", c3.real, c3.fake);

    return 0;
}