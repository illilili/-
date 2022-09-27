#include <stdio.h>

void hanoi_tower(int n, char from, char tmp, char to)
{
	//simple case
	if (n == 1) {
		printf("���� 1�� %c���� %c���� �ű��. \n", from, to);

	}
	else {
		// n - 1���� from���� tmp
		hanoi_tower(n - 1, from, to, tmp);
		// n�� ������ from���� to
		printf("���� %d�� %c���� %c���� �ű��.\n", n, from, to);
		// n - 1���� tmp���� to
		hanoi_tower(n - 1, tmp, from, to);
		
	}
}