#include <stdio.h>

void swap(int* px, int* py);
void swap2(int a, int b);

int main(void) {
	int x = 1, y = 2;
	char a = 'A';
	char* p = NULL;
	p = &a;

	printf("swap을 호출하기 전 : a=%d, B=%d\n", x, y);
	swap(&x, &y);
	printf("swap을 호출한 다음 : a=%d, B=%d\n", x, y);

	printf("swap을 호출하기 전 : a=%d, B=%d\n", x, y);
	swap2(x, y);
	printf("swap을 호출한 다음 : a=%d, B=%d\n", x, y);

	if (p == NULL) {
		fprintf(stderr, "오류: 포인터가 아무 것도 가리키지 않습니다.");
	}
	else {
		printf("*p = %c\n", *p);
	}

	return 0;
}