#include <stdio.h>
#include <stdlib.h>
#include "first.h"



ListNode* insert_first(ListNode* head, element value) {

	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;
	p->Link = head;
	head = p;
	return head;
}

ListNode* delete_frist(ListNode* head) {
	ListNode* removed;
	if (head == NULL) return NULL;
	removed = head;
	head = removed->Link;
	free(removed);
	return head;
}

ListNode* search_list(ListNode* head, element x) {
	ListNode* p = head;

	while (p != NULL) {
		if (p->data == x) return p;
		p = p->Link;
	}
	return NULL;
}
ListNode* concat_list(ListNode* head1, ListNode* head2)
{
	if (head1 == NULL)
		return head2;
	else if (head2 == NULL)
		return head2;
	else {
		ListNode* p;
		p = head1;
		while (p->Link != NULL)
			p = p->Link;
		p->Link = head2;
		return head1;
	}
}

ListNode* reverse(ListNode* head)
{
	// 순회 포인터로 p, q, r을 사용
	ListNode* p, * q, * r;

	p = head;           // p는 역순으로 만들 리스트
	q = NULL;           // q는 역순으로 만들 노드

	while (p != NULL) {
		r = q;          // r은 역순으로 된 리스트.    
		// r은 q, q는 p를 차례로 따라간다.
		q = p;
		p = p->Link;
		q->Link = r;    // q의 링크 방향을 바꾼다.
	}

	return q;
}



