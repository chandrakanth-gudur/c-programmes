#include<stdio.h>
int main()
{
	char a;
	scanf("%c",a);
	switch(a)
	{
		case'a':
		case'A':
		case'e':
		case'E':
		case'i':
		case'I':
		case'o':
		case'O':
		case'u':
		case'U':
		printf("it is a vowel");
		break ;
		default:
			printf("it is a consonant");
		break;
		}
}
