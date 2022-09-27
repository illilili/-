#include <stdio.h>

void swap(int* px, int* py)
{
	int tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;
}
void swap2(int a, int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}