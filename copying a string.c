#include<stdio.h>
int main()
{
	char a[100],b[100];
	int i;
	printf("Enter the elements of the string.\n");
	gets(a);
i=0;
while(a[i]!='\0')
{
b[i]=a[i];
i++;
}
b[i]='\0';
	puts(b);
	
	
	
	
	
	
	
	
	
}
