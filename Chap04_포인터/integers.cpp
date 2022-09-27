#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define SIZE 6

int cal_sum(int *plist) {
	int sum = 0;

	//1
	for (int i = 0; i < SIZE; i++) {
		sum += plist[i];
	}

	//2
	for (int i = 0; i < SIZE; i++) {
		sum += *(plist + i);
	}

	return sum;
	
}

int main(void) {
	int list[SIZE] = {1, 2, 3, 4, 5, 6};

	printf("�� = %d\n", cal_sum(list)); 

	int* p;  // ���� �޸� �Ҵ�
	p = (int *)malloc(SIZE * sizeof(int));
	// int p[SIZE];  // ���� �޸� �Ҵ�
	
	if (p == NULL) {
		fprintf(stderr, "�޸𸮰� �����ؼ� �Ҵ��� �� �����ϴ�.\n");
		exit(1);
	}

	for (int i = 0; i < SIZE; i++)
		p[i] = i + 1;

	printf("�� = %d\n", cal_sum(p));


	free(p);

	return 0;
}