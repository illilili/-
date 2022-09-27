#pragma once
#define MAX_STACK_SIZE 100

typedef int element;  // ���� int�ڸ��� element�� �ٲ��ֱ�, ���� �ٲٰ� ���� �� int�� ����

typedef struct {
	// int data[MAX_STACK_SIZE];  // ���� ����
	// element data[MAX_STACK_SIZE];  // ����
	element* data;
	int capacity;  // ���� ���� ������
	int top;
} StackType;

void init_stack(StackType* s);
// void push(StackType* s, int item);  // ���� ����
void push(StackType* s, element item);
int pop(StackType* s);