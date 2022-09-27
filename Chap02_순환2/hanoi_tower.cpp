#include <stdio.h>

void hanoi_tower(int n, char from, char tmp, char to)
{
	//simple case
	if (n == 1) {
		printf("원판 1을 %c에서 %c으로 옮긴다. \n", from, to);

	}
	else {
		// n - 1개를 from에서 tmp
		hanoi_tower(n - 1, from, to, tmp);
		// n번 원판을 from에서 to
		printf("원판 %d를 %c에서 %c으로 옮긴다.\n", n, from, to);
		// n - 1개를 tmp에서 to
		hanoi_tower(n - 1, tmp, from, to);
		
	}
}