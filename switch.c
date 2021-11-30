#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,ans;
	int v;
	printf("Enter two  numbers ");

	scanf("%d %d",&x,&y );
	printf("Enter 1 for addition\nEnter 2 for subtracton\nEnter 3 for multiplication\nEnter 4 for division");
	scanf("%d",&v);
	switch(v)
{
		case 1:
		ans=x+y;
		break;
		case 2:
		ans=x-y;
		break;
		case 3:
	    ans=x*y;
		break;
		case 4:
		ans=x/y;
		break;	
			default:
				printf("Incorrect option");
				
}
	printf("Answer =%d",ans);
	
}
