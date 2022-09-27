#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

// ���� �ʱ�ȭ �Լ�

void init_stack(StackType* s)
{
	s->top = -1;

	s->capacity = 1;
	s->data = (element*)malloc(s->capacity * sizeof(element));

}


// ��ȭ ���� ���� �Լ�
int is_full(StackType* s) {
	/* if (s->top == MAX_STACK_SIZE - 1)
		return 1;
	else return 0; */

	return (s->top == MAX_STACK_SIZE - 1);
}

int is_empty(StackType* s) {
	return(s->top == -1);
}

// ���� �Լ� push
void push(StackType* s, element item) {
	// ++(s->top); // top�� ����
	// s->data[s->top] = item;
	if (is_full(s)) {
		fprintf(stderr, "���� ��ȭ ����\n");
		// exit(1);
		return;
	}

	s->data[++(s->top)] = item;
}

// ���� �Լ� pop
int pop(StackType* s) {
	element item; // = s->data[s->top]; �� ����
	/* item = s->data[s->top];
	(s->top)--;
	return item; */

	if (is_empty(s)) {
		fprintf(stderr, "���� ���� ����\n");
		exit(1); // ����
	}
	return s->data[(s->top)--];  // �� ���� ���
}
