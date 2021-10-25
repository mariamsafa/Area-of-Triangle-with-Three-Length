// Area of a Trinagle with Three Length
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, s, area;
	printf("Enter the value of the 3 Lengths : ");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	s = (a + b + c) / 2;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("Area of the Triangle is %.2lf", area);
	return 0;
}