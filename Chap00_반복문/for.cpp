#include <stdio.h>

int main(void)
{
	int i;
	
	for (i = 0; i < 5; i++) {
		printf("Hello Wolrd!\n");
		printf("i = %d\n", i);
	}

	for (int i = 0; i < 7; i++) {
		printf("Hello Wolrd!\n");
		printf("i = %d\n", i);
	}

	printf("i = %d\n", i);

	return 0;
}