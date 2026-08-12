#include <stdio.h>
int main()
{
	int grade, number;
	printf("enter your number:");
	scanf("%d",&number);
	if (number<3){
		printf("grade is F");
	}
	else if(3<=number<=4){
		printf("grade is D");
	}
	else if(5<=number<=6){
		printf("grade is C");
	}
	else if(7<=number<=8){
		printf("grade is B");
	}
	else if(9<=number<=10){
		printf("grade is A");
	}
	else
	return 0;
}
