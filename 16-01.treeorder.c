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

void preorder(Tree** root) {	// ���� ��ȸ
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

void postorder(Tree** root) {	// ���� ��ȸ
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

void del(Tree** root, int num) {
	
	if (*root == NULL) {
		printf("\n%d >>> ���� ������", num);
		return;
	}
	// 1. Ž�� => ������� �����ͱ��� ã�� ���� => ���� ���� ��ͷ� ó��
	if ((*root)->data > num) {
		del(&(*root)->left, num);
	}

	else if ((*root)->data < num) {
		del(&(*root)->right, num);
	}
	else
	// 2. ���� �� => �����͸� ã�� => ������
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

int main() {
	Tree* root = NULL;

	insert(&root, 45);
	insert(&root, 27); insert(&root, 62);
	insert(&root, 17); insert(&root, 57); insert(&root, 73);
	insert(&root, 52); insert(&root, 65); insert(&root, 76);
	insert(&root, 63); insert(&root, 69);
	insert(&root, 54); insert(&root, 71);

	/*
		printf("====random input : 1~100==== \n");
		srand(time(NULL));	// �������� �پ��ϰ� ������ �ϴ� �Լ�
		for (int i = 0; i < 10; i++) {
			// rand()�� ������ ������ ��ȯ, ���� 0 ~ 32,767
			insert(&root, rand() % 100 + 1);
			//1 ~ 100
		}
	*/

	printf("---preorder---\n");
	preorder(&root);

	printf("\n\n---inorder---\n");
	inorder(&root);


	printf("\n\n---postorder---\n");
	postorder(&root);

// ���� ��ȸ : root -> left -> right
// ��> root���� Ȯ�� => root�� ��ȭ�� Ž�� ����

// ���� ��ȸ : left -> root -> right
// ��> ������������ Ȯ�� ����

// ���� ��ȸ : left -> right -> root
// ��> ���ܳ����� �Ž��� �ö�� ���� �������� root ����
// ��> clear�Լ� ¥�µ� �̿��ϸ� ����

	del(&root, 17);		// ���� ��� ����
	printf("\n------------------------\n���� ��ȸ : ");	inorder(&root);		printf("\n");

	del(&root, 57);		// ���� �ڽ� ��带 ���� ��� ����
	printf("\n------------------------\n���� ��ȸ : ");	inorder(&root);		printf("\n");

	del(&root, 63);		// ������ �ڽ� ��带 ���� ��� ����
	printf("\n------------------------\n���� ��ȸ : ");	inorder(&root);		printf("\n");

	del(&root, 80);		// ���� �� ���Ž� ���� ó��
	printf("\n------------------------\n���� ��ȸ : ");	inorder(&root);		printf("\n");

	root = NULL;
}