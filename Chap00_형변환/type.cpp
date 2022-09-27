#include <stdio.h>

int main(void)
{
	char c;  // 문자형

	c = 10000;  // 내림 변환

	printf("c = %d\n", c);

	c = 'a';  // 내림 변환

	printf("c = %c\n", c);

	float f;

	f = 10 + 20;  // 올림 변환
	// 정수 + 정수 -> 정수

	f = 10 + 20.0;
	// 정수 + 실수 -> 실수

	printf("f = %f\n", f);

	float i;

	i = 1.23456 + 10;
	// 실수 + 정수 -> 실수 11.23456 

	printf("i = %d\n", i);

	return 0;
}