#include<stdio.h>
#include<conio.h>
unsigned long factorial(int n)
{
    int  i;
    unsigned long  fact = 1;
	for (i = 1; i <= n; ++i)
	{
	    fact *=i;
	}

    return fact;
}
void main()
{

int sum = 0, n;
int a = 0;
int b = 1;
clrscr();
printf("Enter the nth value: ");
scanf("%d", &n);
printf("Fibonacci series:\n ");
while(sum <= n)
{
printf("%d ", sum);
printf(" %lu\n",factorial(sum));
a = b;
b = sum;
sum = a + b;

}
getch();

}