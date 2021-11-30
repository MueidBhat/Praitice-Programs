#include<stdio.h>
int main()
{
	int m,n,i,j;
int a[10][10],b[10][10];

printf("Enter the order of matrix ")	;
	scanf("%d %d",&m,&n);
	printf("Enter the elements of the martix row-wise ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
			

		
	}
	printf("\n");
	//for printing matrix
	printf("The given matrix is \n");
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
			
		}
			printf("\n");

		
	}
		printf("\n");
	//finding transpose
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
  {
  b[j][i]=a[i][j];
  
}

}	
	printf("\n");
	//for printing transpose
		printf("The transpose of the given matrix is \n");
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d",b[i][j]);
			
		}
			printf("\n");

		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
