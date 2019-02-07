#include <stdio.h>
#define PI 3.14159265358979323846

int main(void)
{
	float radius;
	printf("Enter radius\n");
	scanf("%f", &radius);

	float area = (radius * radius) * PI;
	printf("The area of the circle is %f\n\n", area);

	return 0;
}