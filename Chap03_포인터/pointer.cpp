#include <stdio.h>

void swap(int* px, int* py);
void swap2(int a, int b);

int main(void) {
	int x = 1, y = 2;
	char a = 'A';
	char* p = NULL;
	p = &a;

	printf("swap�� ȣ���ϱ� �� : a=%d, B=%d\n", x, y);
	swap(&x, &y);
	printf("swap�� ȣ���� ���� : a=%d, B=%d\n", x, y);

	printf("swap�� ȣ���ϱ� �� : a=%d, B=%d\n", x, y);
	swap2(x, y);
	printf("swap�� ȣ���� ���� : a=%d, B=%d\n", x, y);

	if (p == NULL) {
		fprintf(stderr, "����: �����Ͱ� �ƹ� �͵� ����Ű�� �ʽ��ϴ�.");
	}
	else {
		printf("*p = %c\n", *p);
	}

	return 0;
}