#pragma once
typedef char element;
char title[100];
typedef struct DlistNode {
	element data;
	struct DlistNode* llink;
	struct DlistNode* rlink;
}DlistNode;

void dinsert(DlistNode* before, element data);
void print_dlist(DlistNode* phead);
void ddelete(DlistNode* head, DlistNode* removed);