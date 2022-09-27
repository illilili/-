#include <stdio.h>
#include "stack.h"


int main(void) {
	StackType s;

	init_stack(&s);

	push(&s, 1);
	push(&s, 2);
	push(&s, 3);
	push(&s, 4);
	push(&s, 5);
	push(&s, 6);


	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));  // 공백 에러, 종료
	printf("%d\n", pop(&s));  // 수행X
	printf("%d\n", pop(&s));


	return 0;
}