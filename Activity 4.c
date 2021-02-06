#include<stdio.h>

int input()
{
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	return a;
}

int sum(int a, int b)
{
	int sum = a+b;
	return sum;
}

void output(int a, int b, int sum)
{
	printf("The sum of %d+%d=%d", a, b, sum);
}

void main()
{
	int x, y, z;
	x=input();
	y=input();
z=sum(x, y);
output(x, y, z);
}
