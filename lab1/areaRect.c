#include <stdio.h>

int main(void)
{
	float a, b;
	printf("Enter side one\n");
	scanf("%f", &a);
	printf("Enter side two\n");
	scanf("%f", &b);

	float c = a * b;
	printf("The area of the rectangle is %f\n\n", c);

	return 0;
}