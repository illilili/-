#include <stdio.h>

int factorial(int n)  // �Լ��� �Ӹ�,���
{
	printf("factorial call %d\n", n);
	if (n <= 1)  // simple case,  ��ȯ�� ���� ����
		return 1;
	else
		return (n * factorial(n - 1));  // n * (n - 1)!
}