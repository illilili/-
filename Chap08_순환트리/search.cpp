#include <stdio.h>
#include "tree.h"

TreeNode* search(TreeNode* root, int key) 
{
	if (root == NULL)
		return NULL;

	if (key == root->data)
		return root;
	else if (key < root->data){
		return search(root->left, key);
	}
	else {
		return	search(root->right, key);
	}
}

TreeNode* search(TreeNode* root, int key) {
	TreeNode* node = root;

	while (node != NULL)
	{
		if (key == node->data)
			return node;
		else if (key < node->data)
			node = node->left;
		else
			node = node->right;
	}
	return NULL;
}
