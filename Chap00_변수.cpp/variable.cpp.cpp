// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void)
{
	float radius;  //변수 선언, 주석
	float area;
	
	radius = 12;

	area = radius * radius * 3.14; //원의 면적
	printf("원의 면적: %f\n", area);


	scanf_s("%f", &radius);

	area = radius * radius * 3.14; //원의 면적2
	printf("원의 면적: %f\n", area);

	return 0;

}