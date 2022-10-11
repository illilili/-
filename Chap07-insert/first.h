#pragma once

typedef int element;

typedef struct _ListNode {
	element data;
	struct _ListNode* Link;

}ListNode;

ListNode* insert_first(ListNode* head, element value);
ListNode* delete_frist(ListNode* head);
ListNode* search_list(ListNode* head, element x);
ListNode* concat_list(ListNode* head1, ListNode* head2);
ListNode* reverse(ListNode* head);