#include<stdio.h>
int main()
{
	int a[6]={1,2,3,4,5,6};
	int i,j,flag=0;
	printf("Enter the element to be searched");
	scanf("%d",&j);
	for(i=0;i<6;i++)
	{
	if(j==a[i]) 
	{
	flag=1;
	printf("Element found a %d th position.",i+1);
	break;
}
	 }
if(flag==0)
{printf("Element not found.");
}	
	
	
	
}
