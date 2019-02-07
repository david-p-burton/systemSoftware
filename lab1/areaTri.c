#include <stdio.h>

int main(void)
{
	float height, base;
	printf("Enter height\n");
	scanf("%f", &height);
	printf("Enter base\n");
	scanf("%f", &base);

	float area = (height * base) / 2;
	printf("The area of the triangle is %f\n\n", area);

	return 0;
}