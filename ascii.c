#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if(a>=65&&a<=90)
	{
	printf("the character is upper case");
	}
	else if(a>=97&&a<=122)
	{
		printf("the character is lower case");
	}
	else
	{
		printf("it is a special character");
	}
}
