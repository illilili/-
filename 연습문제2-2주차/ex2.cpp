#include <stdio.h>

// 입력받은 정수에 대해 구구단을 출력하는 함수 작성

int main(void) {
	int number = 0;

	printf("정수를 입력하세요 >  ");
	scanf_s("%d", &number);

	// 2-1. number가 0보다 작을 경우, ‘수행 결과 예시 2-1’과 같은 결과를 출력하는 if문 작성.

	if (number < 0)
		printf("0보다 큰 정수를 입력해주세요.");

	  
	// 2-2. ‘수행 결과 예시 2-2’와 같이 출력되도록 for문 작성
	else {
		for (int i = 1; i < 10; i++) {
			printf("%d * %d = %d\n", number, i, number * i);
		}
	}


	return 0;
}
