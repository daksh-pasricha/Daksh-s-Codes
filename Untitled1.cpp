#include <stdio.h>

int main()
{
    float f, c;
    printf("Enter value in Fahrenheit = ");
    scanf("%f", &f);
    c = (5.0 / 9.0) * (f - 32);
    printf("F = %f\nC = %f", f, c);
    
	printf("\nEnter value in celscius=");
    scanf("%f",&f);
    f= (9/5)*c + 32;
    printf("C=%f\nF=%f",c,f);

    return 0;
}
