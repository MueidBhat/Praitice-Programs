#include<stdio.h>
int main()
{
	int a[5][6];
	int i,j;
	printf("Enter the values of the 5x4 matrix column-wise ");

for(j=0;j<6;j++)
{for(i=0;i<5;i++)
{scanf("%d",&a[i][j]);
}
}
//for displaying

for(j=0;j,6;j++)
{for(i=0;i<5;i++)
{printf("%d",a[i][j]);
}
}
}
