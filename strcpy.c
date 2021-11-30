#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	char b[100];

	printf("Enter the elements of the string.\n");
	gets(a);
	strcpy(b,a);
	puts(b);
}
