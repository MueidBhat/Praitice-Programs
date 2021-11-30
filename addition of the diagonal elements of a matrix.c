//sum of the diagonal elements of a matrix
#include<stdio.h>
int main()

{
int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
int i,j,sum=0;
for(i=0;i<4;i++)
{
 for(j=0;j<4;j++)
{
	if(i==j)
	{
	sum=sum+a[i][j];
	}
}	
}





printf("The sum of the diagonal elements of this matrix is %d",sum);
















}
