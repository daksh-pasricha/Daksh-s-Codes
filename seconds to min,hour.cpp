#include <stdio.h>

int main()
{
    float f, c;

    printf("Enter value in Fahrenheit = ");
    scanf("%f", &f);

    c = (5.0 / 9.0) * (f - 32);

    printf("F = %.2f\nC = %.2f", f, c);

    return 0;
}
