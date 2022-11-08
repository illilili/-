#include <stdio.h>

#include "tree.h"

// 전위 순회 : VAR
void preorder(TreeNode* root) {
	if (root == NULL)
		return;
	
	printf("[%2d] ", root->data);  // 2자리 출력 V
	preorder(root->left);  // L
	preorder(root->right);  // R
	
}

// 중위 순회  LVR
void inorder(TreeNode* root) {
	if (root != NULL) {
		inorder(root->left);  // L
		printf("[%2d] ", root->data);  // V
		inorder(root->right);  // R
	}
}
 
// 후위 순회  LRV
void postorder(TreeNode* root) {
	if (root != NULL) {
		postorder(root->left);  // L
		postorder(root->right);  // R
		printf("[%2d] ", root->data);  // V
	}
}

#define SIZE 100
int top = -1;
TreeNode* stack[SIZE];

void push(TreeNode* p)
{
	if (top < SIZE - 1)
		stack[++top] = p;
}


TreeNode* pop()
{
	TreeNode* p = NULL;

	if (top >= 0)
		p = stack[top--];

	return p;
}


void inorder_iter(TreeNode* root)
{
	while (1) {
		for (; root; root = root->left)
			push(root);

		root = pop();
		if (!root)
			break;

		printf("[%2d] ", root->data);

		root = root->right;
	}
	
}
