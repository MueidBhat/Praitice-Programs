#include<stdio.h>
int main()
{
	int a[5][6];
	int i,j;
	printf("Enter the values of the 5x6 matrix column-wise ");

for(i=0;i<5;i++)
{
for(j=0;j<6;j++)
{
scanf("%d",&a[i][j]);
}
}
//for displaying


for(i=0;i<5;i++)

{
for(j=0;j<6;j++)

{
printf("%d" ,a[i][j]);

}
printf("\n");

}
}

