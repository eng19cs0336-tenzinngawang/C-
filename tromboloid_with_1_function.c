#include<stdio.h>

void main()
{
	float h, d, b, vol;
	printf("Enter the Value of h\n");
	scanf("%f", &h);
	printf("Enter the Value of d\n");
	scanf("%f", &d);
	printf("Enter the Value of b\n");
	scanf("%f", &b);

	vol = ((h * d * b) + ( d / b))/3;
	
	printf("Volume of Tromboloid is %f", vol);
}
