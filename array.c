#include<stdio.h>
int main()
{
	int a[100];
	int i,n;
	printf("Enter the size of the array ");
	scanf("%d",&n);
	printf("Enter the elements of the array ");
	for(i=0;i<n;i++)
{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
{
		printf("%d",a[i]);
}
	
}
