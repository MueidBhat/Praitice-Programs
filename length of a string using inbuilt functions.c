#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i;
	printf("Enter the elements of the string.\n");
	gets(a);
	i=strlen(a);
	printf("Length of the string is %d",i);
}
