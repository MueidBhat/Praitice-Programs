//program to find greater of two numbers using functions
#include<stdio.h>
int greater(int,int);
int main()
{int a,b;
int d;
a=2;
b=3;
d=greater(a,b);
printf("the greater number is %d ",d);
}

int greater(int x,int y)
{
int g;
if (x>y)
g=x;
else
g=y;
return g;
}
