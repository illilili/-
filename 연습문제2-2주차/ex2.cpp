#include <stdio.h>

// �Է¹��� ������ ���� �������� ����ϴ� �Լ� �ۼ�

int main(void) {
	int number = 0;

	printf("������ �Է��ϼ��� >  ");
	scanf_s("%d", &number);

	// 2-1. number�� 0���� ���� ���, ������ ��� ���� 2-1���� ���� ����� ����ϴ� if�� �ۼ�.

	if (number < 0)
		printf("0���� ū ������ �Է����ּ���.");

	  
	// 2-2. ������ ��� ���� 2-2���� ���� ��µǵ��� for�� �ۼ�
	else {
		for (int i = 1; i < 10; i++) {
			printf("%d * %d = %d\n", number, i, number * i);
		}
	}


	return 0;
}
