#include <stdio.h>
#include <stdlib.h>
#include "first.h"

void print_list(ListNode* head) {
	for (ListNode* p = head; p != NULL; p = p->Link)
		printf("%d->", p->data);
	printf("NULL \n");
}

int main2(void) {
	ListNode* head = NULL;

	for (int i = 0; i < 5; i++) {
		head = insert_first(head, i);
		print_list(head);
	}
	for (int i = 0; i < 5; i++) {
		head = delete_frist(head);
		print_list(head);
	}

	// Ž���� ����Ʈ ����
	head = insert_first(head, 10);
	head = insert_first(head, 20);
	head = insert_first(head, 30);

	if (search_list(head, 20) == NULL)
	{
		printf("not found\n");
	}
	else {
		printf("found\n");
	}
	if (search_list(head, 40) == NULL)
	{
		printf("not found\n");
	}
	else {
		printf("found\n");
	}
	return 0;
}

// �׽�Ʈ ���α׷�
int main(void)
{
	printf(">> ���� ����Ʈ �⺻ ���� <<\n");
	ListNode* head = NULL;

	for (int i = 0; i < 5; i++) {
		head = insert_first(head, i);
		print_list(head);
	}

	for (int i = 0; i < 5; i++) {
		head = delete_frist(head);
		print_list(head);
	}

	// Ž�� �׽�Ʈ
	printf("\n>> ���� ����Ʈ Ž�� ���� <<\n");
	head = insert_first(head, 10);
	print_list(head);
	head = insert_first(head, 20);
	print_list(head);
	head = insert_first(head, 30);
	print_list(head);
	if (search_list(head, 30) != NULL)
		printf("����Ʈ���� 30�� ã�ҽ��ϴ�. \n");
	else
		printf("����Ʈ���� 30�� ã�� ���߽��ϴ�. \n");

	// ���� �׽�Ʈ
	printf("\n>> ���� ����Ʈ ���� ���� <<\n");
	ListNode* head1 = NULL;
	ListNode* head2 = NULL;

	head1 = insert_first(head1, 10);
	head1 = insert_first(head1, 20);
	head1 = insert_first(head1, 30);
	print_list(head1);

	head2 = insert_first(head2, 40);
	head2 = insert_first(head2, 50);
	print_list(head2);

	ListNode* total = concat_list(head1, head2);
	print_list(total);

	// ���� �׽�Ʈ
	printf("\n>> ���� ����Ʈ ���� �׽�Ʈ <<\n");
	ListNode* head3 = NULL;
	ListNode* head4 = NULL;

	head3 = insert_first(head3, 10);
	head3 = insert_first(head3, 20);
	head3 = insert_first(head3, 30);
	print_list(head3);

	head3 = reverse(head3);
	print_list(head3);

	return 0;
}

