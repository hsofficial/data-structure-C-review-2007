#include<stdio.h>
#include<stdlib.h>


typedef struct node {
	int data;
	struct node* left, * right;
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
	if ((*root)->data > num) {
		insert(&(*root)->left, num);
	}
	if ((*root)->data < num) {
		insert(&(*root)->right, num);
	}
}

void inorder(Tree** root) {
	if (*root != NULL) {
		if ((*root)->left != NULL)
		{
			inorder(&(*root)->left);
		}
		printf(">>> %d  ", ((*root)->data));

		if ((*root)->right != NULL)
		{
			inorder(&(*root)->right);
		}
	}

}

void preorder(Tree** root) {	// ���� ��ȸ
	if (*root != NULL) {
		printf(">>> %d  ", ((*root)->data));

		if ((*root)->left != NULL)
		{
			preorder(&(*root)->left);
		}

		if ((*root)->right != NULL)
		{
			preorder(&(*root)->right);
		}
	}
}

void postorder(Tree** root) {	// ���� ��ȸ
	if (*root != NULL) {
		if ((*root)->left != NULL)
		{
			postorder(&(*root)->left);
		}

		if ((*root)->right != NULL)
		{
			postorder(&(*root)->right);
		}

		printf(">>> %d  ", ((*root)->data));
	}
}

void del(Tree** root, int num) {
	if (*root == NULL)
	{
		printf("\n%d >>> ���� ������", num);
		return;
	}

	if ((*root)->data > num)
	{
		del(&(*root)->left, num);
	}

	else if ((*root)->data < num)
	{
		del(&(*root)->right, num);
	}

	else
	{
		Tree* tmp = *root;


		if ((*root)->left == NULL && (*root)->right == NULL)
		{
			*root = NULL;
			free(tmp);
		}
		
		else if ((*root)->left != NULL)
		{
			*root = (*root)->left;
			free(tmp);
		}

		else if ((*root)->right != NULL)
		{
			*root = (*root)->right;
			free(tmp);
		}
	}
}

void clear(Tree** root) {
	if ((*root)->left != NULL)
	{
		clear(&(*root)->left);
	}

	if ((*root)->right != NULL)
	{
		clear(&(*root)->right);
	}
	free(*root);
	*root = NULL;
}

int main() {
	Tree* root = NULL;

	insert(&root, 45);
	insert(&root, 27); insert(&root, 62);
	insert(&root, 17); insert(&root, 57); insert(&root, 73);
	insert(&root, 52); insert(&root, 65); insert(&root, 76);
	insert(&root, 63); insert(&root, 69);
	insert(&root, 64); insert(&root, 71);

	printf("���� ��ȸ : ");	preorder(&root);	printf("\n");
	printf("���� ��ȸ : ");	inorder(&root);		printf("\n");
	printf("���� ��ȸ : ");	postorder(&root);	printf("\n");


	del(&root, 17);		// ���� ��� ����
	printf("���� ��ȸ : ");	inorder(&root);		printf("\n");

	del(&root, 57);		// ���� �ڽ� ��带 ���� ��� ����
	printf("���� ��ȸ : ");	inorder(&root);		printf("\n");

	del(&root, 63);		// ������ �ڽ� ��带 ���� ��� ����
	printf("���� ��ȸ : ");	inorder(&root);		printf("\n");

	//del(&root, 80);		// ���� �� ���Ž� ���� ó��

	clear(&root);
	printf("*���� ��ȸ : ");	inorder(&root);		printf("\n");

	insert(&root, 45);
	insert(&root, 27); insert(&root, 62);
	printf("*���� ��ȸ : ");	inorder(&root);		printf("\n");
}