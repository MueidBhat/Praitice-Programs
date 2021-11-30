#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	char b[100];

	printf("Enter the elements of the string.\n");
	gets(a);
	printf("Enter the elements of the string.\n");
	gets(b);
	
	if(strcmp(a,b)==0)
	
	printf("The two strings are same");
	else
	printf("the two srings  are diff.");
}
