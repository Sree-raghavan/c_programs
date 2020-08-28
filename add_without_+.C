#include<stdio.h>
#include<conio.h>
    int Add(int x, int y)
    {
	while (y != 0)  // Iterate till there is no carry
	{
	    int carry = x & y;
	    x = x ^ y;
	    y = carry << 1;
	}
	return x;
    }
 void main()
    {
	clrscr();
	printf("%d",Add(1,2));
	getch();
    }