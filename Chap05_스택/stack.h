#pragma once
#define MAX_STACK_SIZE 100

typedef int element;  // 원래 int자리를 element로 바꿔주기, 형식 바꾸고 싶을 때 int만 변경

typedef struct {
	// int data[MAX_STACK_SIZE];  // 정수 저장
	// element data[MAX_STACK_SIZE];  // 정적
	element* data;
	int capacity;  // 현재 스택 사이즈
	int top;
} StackType;

void init_stack(StackType* s);
// void push(StackType* s, int item);  // 정수 저장
void push(StackType* s, element item);
int pop(StackType* s);