#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if (c == 'a' | c == 'e' | c == 'i' | c == 'o' | c == 'u')
        printf("The character entered is a vovel");
    else
        printf("The character is a consonant");
    return 0;
}