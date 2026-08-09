#include <stdio.h>
int main()
{
	int mm,cm,inch,feet;
	printf("enter value in mm =");
	scanf("%d",&mm);
	cm= 10*mm ;
	inch=2.5*10*mm ;
	feet= 12*2.5*10*mm ;
	printf("mm=%d\ncm=%d\ninch=%d\nfeet=%d",mm,cm,inch,feet);
	return 0;
}
