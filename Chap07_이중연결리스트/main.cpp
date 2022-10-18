#include <stdio.h>
#include <stdlib.h>

#include "dlinkedlist.h"

int main(void)
{
	DlistNode* head = NULL;
	head = (DlistNode*)malloc(sizeof(DlistNode));
	if (head == NULL)
		return 1;
	// 헤더 노드
	head->llink = head;
	head->rlink = head;
	
	dinsert(head, 10);
	dinsert(head, 20);
	dinsert(head, 30);
	dinsert(head, 40);

	print_dlist(head);

	ddelete(head, head->rlink);
	print_dlist(head);

	return 0;
}