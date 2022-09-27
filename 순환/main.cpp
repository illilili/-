#include <stdio.h>

int factorial(int n); // 함수 프로토타입
int factorial_iter(int n);

int main(void) {

	printf("factorial(3) = %d\n", factorial(3));
	printf("factorial_iter(3) = %d\n", factorial_iter(3));
	

	return 0;
}