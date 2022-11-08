#pragma once

typedef struct _TreeNode {
	int data;
	struct _TreeNode* left;
	struct _TreeNode* right;
} TreeNode;

void preorder(TreeNode* root);
void inorder(TreeNode* root);
void postorder(TreeNode* root);
void push(TreeNode* p);
TreeNode* pop();
void inorder_iter(TreeNode* root);
TreeNode* search(TreeNode* root, int key);
TreeNode* search(TreeNode* root, int key);