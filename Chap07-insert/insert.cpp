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
	// ��ȸ �����ͷ� p, q, r�� ���
	ListNode* p, * q, * r;

	p = head;           // p�� �������� ���� ����Ʈ
	q = NULL;           // q�� �������� ���� ���

	while (p != NULL) {
		r = q;          // r�� �������� �� ����Ʈ.    
		// r�� q, q�� p�� ���ʷ� ���󰣴�.
		q = p;
		p = p->Link;
		q->Link = r;    // q�� ��ũ ������ �ٲ۴�.
	}

	return q;
}



