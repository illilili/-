#include <stdio.h>
double power(double x, int n);
double slow_power(double x, int n);

void hanoi_tower(int n, char from, char tmp, char to);

int main() {
	int a = power(2, 3);
	int b = slow_power(2, 3); 
	printf("%d\n", a);
	printf("%d\n", a);

	hanoi_tower(4, 'A', 'B', 'C');

	return 0;
}