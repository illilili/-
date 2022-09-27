#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

// 스택 초기화 함수

void init_stack(StackType* s)
{
	s->top = -1;

	s->capacity = 1;
	s->data = (element*)malloc(s->capacity * sizeof(element));

}


// 포화 상태 검출 함수
int is_full(StackType* s) {
	/* if (s->top == MAX_STACK_SIZE - 1)
		return 1;
	else return 0; */

	return (s->top == MAX_STACK_SIZE - 1);
}

int is_empty(StackType* s) {
	return(s->top == -1);
}

// 삽입 함수 push
void push(StackType* s, element item) {
	// ++(s->top); // top을 증가
	// s->data[s->top] = item;
	if (is_full(s)) {
		fprintf(stderr, "스택 포화 에러\n");
		// exit(1);
		return;
	}

	s->data[++(s->top)] = item;
}

// 삭제 함수 pop
int pop(StackType* s) {
	element item; // = s->data[s->top]; 도 가능
	/* item = s->data[s->top];
	(s->top)--;
	return item; */

	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1); // 종료
	}
	return s->data[(s->top)--];  // 더 많이 사용
}
