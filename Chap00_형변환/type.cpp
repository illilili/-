#include <stdio.h>

int main(void)
{
	char c;  // ������

	c = 10000;  // ���� ��ȯ

	printf("c = %d\n", c);

	c = 'a';  // ���� ��ȯ

	printf("c = %c\n", c);

	float f;

	f = 10 + 20;  // �ø� ��ȯ
	// ���� + ���� -> ����

	f = 10 + 20.0;
	// ���� + �Ǽ� -> �Ǽ�

	printf("f = %f\n", f);

	float i;

	i = 1.23456 + 10;
	// �Ǽ� + ���� -> �Ǽ� 11.23456 

	printf("i = %d\n", i);

	return 0;
}