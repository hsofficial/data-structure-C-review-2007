#include<stdio.h>
#include<stdlib.h>

// Tree : 비선형 구조로써 성능보다 효율에 중시한 자료구조

typedef struct node {
	int data;
	struct node* left;
	struct node* right;
}Tree;

Tree* getNode() {
	Tree* newnode = (Tree*)malloc(sizeof(Tree));
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}

void insert(Tree** root, int num) {
	if (*root == NULL) {
		*root = getNode();
		(*root)->data = num;
		return;
	}
	else if ((*root)->data > num) {
		insert(&(*root)->left, num);
	}
	else if ((*root)->data < num) {
		insert(&(*root)->right, num);
	}
}

int main() {
	Tree* root = NULL;

	insert(&root, 10);
	insert(&root, 20);
	insert(&root, 5);
	insert(&root, 15);

	printf("root : %d\n", root->data);
	printf("root(10)의 왼쪽 : %d\n", root->left->data);
	printf("root(10)의 오른쪽 : %d\n", root->right->data);
	printf("오른쪽(20)의 왼쪽: %d\n", root->right->left->data);

}