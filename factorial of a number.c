//factorial of a number
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,x=1;
	printf("Enter a number ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{x=x*i;

	}
	printf("Factorial of %d is %d",n,x);
	
	
	
	
	
}
