#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char str1[100];
	int i;
	clrscr();
	gets(str1);

	for (i = 0; str1[i]!='\0'; i++)
	{
		if(str1[i] >= 'a' && str1[i] <= 'z')
		{
			str1[i] = str1[i] - 32;
		}
		else if(str1[i] >= 'A' && str1[i] <= 'Z')
		{
			str1[i] = str1[i] + 32;
		}
	}

	printf("%s", str1);

	getchar();
}