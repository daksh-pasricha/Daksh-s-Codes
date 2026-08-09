#include <stdio.h>
#include <math.h>		
int main()
{
    int x1, x2, y1, y2;
    float distance;
    printf("Enter value of x1 = ");
    scanf("%d", &x1);
    printf("Enter value of x2 = ");
    scanf("%d", &x2);
    printf("Enter value of y1 = ");
    scanf("%d", &y1);
    printf("Enter value of y2 = ");
    scanf("%d", &y2);
    distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("\nx1 = %d\n", x1);
    printf("x2 = %d\n", x2);
    printf("y1 = %d\n", y1);
    printf("y2 = %d\n", y2);
    printf("distance = %.2f", distance);
    return 0;
}
