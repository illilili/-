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

	printf("합 = %d\n", cal_sum(list)); 

	int* p;  // 동적 메모리 할당
	p = (int *)malloc(SIZE * sizeof(int));
	// int p[SIZE];  // 정적 메모리 할당
	
	if (p == NULL) {
		fprintf(stderr, "메모리가 부족해서 할당할 수 없습니다.\n");
		exit(1);
	}

	for (int i = 0; i < SIZE; i++)
		p[i] = i + 1;

	printf("합 = %d\n", cal_sum(p));


	free(p);

	return 0;
}