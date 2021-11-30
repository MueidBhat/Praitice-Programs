#include<stdio.h>
#include<conio.h>
int main()
{
	float marks,max_marks,percentage;
	printf("Enter your marks");
	scanf("%f",&marks);
	printf("Enter maximum marks");
	scanf("%f",&max_marks);
	percentage=(marks/max_marks)*100;
	if(percentage>=95)
	printf("You've done great");
	else if(percentage<95&& percentage>=75)
	printf("You have done good");
	else if(percentage<75 && percentage>=50)
	printf("You have done ok");
	else if(percentage<50 && percentage>=33)
	printf("You need to improve");
	else
	printf("You know what time it is");
	
	
	
	
	
	
}
