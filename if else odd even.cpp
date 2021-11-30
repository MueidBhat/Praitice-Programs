#include<stdio.h>
#include<conio.h>
int main;
{
	float marks,max_marks,percentage;
	printf("Enter your marks");
	scanf("%d",&marks);
	printf("Enter maximum marks");
	scanf("%d",&max_marks);
	percentage=(marks/max_marks)*100;
	if(percentage>=95)
	printf("You've done great");
	elseif(percentage<95&& percentage>=75)
	printf("You have done good");
	elseif(percentage<75 && percentage>=50)
	printf("You have done ok");
	elseif(percentage<50 && percentage>=33)
	printf("You need to improve");
	if(percentage<33)
	printf(" You know what time it is");
	
	
	
	
	
	
}
