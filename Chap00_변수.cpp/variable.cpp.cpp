// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void)
{
	float radius;  //���� ����, �ּ�
	float area;
	
	radius = 12;

	area = radius * radius * 3.14; //���� ����
	printf("���� ����: %f\n", area);


	scanf_s("%f", &radius);

	area = radius * radius * 3.14; //���� ����2
	printf("���� ����: %f\n", area);

	return 0;

}