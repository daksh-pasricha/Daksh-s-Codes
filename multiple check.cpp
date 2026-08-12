#include <stdio.h>
int main()
{
	int a,b;
	printf("enter value of a=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);
	if(a%b==0){
		printf("the number is multiple of eachother");
	}
	else{
		printf("the number is not multiple of eachother");
	}
	return 0;
}
