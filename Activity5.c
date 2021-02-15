#include <stdio.h>

int input()
{
	int a; 
	printf("Enter a number\n");
	scanf("%d",&a);
	return a;
}

int find_vol(int h, int d, int b)
{
	int vol;
	vol = ((h * d * b) + ( d / b))/3;
	return vol;
}

void output(int h, int d, int b, int vol)
{
	printf("The volume of Tromboloid with Height: %d Depth: %d and Breadth: %d is %d\n", h, d,b, vol);
}

int main()
{
	int h, d, b, vol;
	printf("Input Height: ");
	h = input();
	printf("Input Depth: ");
	d = input();
	printf("Input Breadth: ");
	b = input();
	vol = find_vol( h, d, b);
	output( h, d, b, vol);
	return 0;
}
