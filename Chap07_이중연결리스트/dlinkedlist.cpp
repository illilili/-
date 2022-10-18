#include <stdlib.h>
#include <stdio.h>
#include "dlinkedlist.h"


// 헤더 노드를 가지는 이중 연결리스트
void dinsert(DlistNode* before, element data)
{
	DlistNode* new_node = (DlistNode*)malloc(sizeof(DlistNode));

	if (new_node == NULL)
		return;

	new_node->data = data;
	new_node->llink = before; // (1)
	new_node->rlink = before->rlink;  // (2)
	before->rlink->llink = new_node;  // (3)
	before->rlink = new_node;  // (4)
}

// 이중 연결 리스트의 노드를 출력
// header_node(phead) -> 40 -> 30 -> 20 -> 10 -> header_node(phead)

DlistNode* current;

void print_dlist(DlistNode* phead)
{
	DlistNode* p;
	for (p = phead->rlink; p != phead; p = p->rlink) {
		if (p == current)
			printf("<-| | #20%s#| |->", p->data.title);
		else
			printf("<-| | 20%s |->", p->data.title);
	}
	printf("\n");
}

void ddelete(DlistNode* head, DlistNode* removed)
{
	if (removed == head)
		return;
	removed->llink->rlink = removed->rlink;  // (1)
	removed->rlink->llink = removed->llink;  // (2)
	free(removed);
}