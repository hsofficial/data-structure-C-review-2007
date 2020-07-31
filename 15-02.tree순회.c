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
	else if ((*root)->data > num) {
		insert(&(*root)->left, num);
	}
	else if ((*root)->data < num) {
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

int main() {
	Tree* root = NULL;

	insert(&root, 30);
	insert(&root, 20);	insert(&root, 40);
	insert(&root, 10);	insert(&root, 25);
	insert(&root, 35);	insert(&root, 45);

/*
	printf("====random input : 1~100==== \n");
	srand(time(NULL));	// �������� �پ��ϰ� ������ �ϴ� �Լ�
	for (int i = 0; i < 10; i++) {
		// rand()�� ������ ������ ��ȯ, ���� 0 ~ 32,767
		insert(&root, rand() % 100 + 1);
		//1 ~ 100
	}
*/


	printf("---inorder---\n");
	inorder(&root);
	// ���� ��ȸ : left -> root -> right
	// 1. �� ó������ ���� ���ʱ��� ���� => ������ ���		(���� = ����Լ� ����)
	// 2. ��� �� => root�� �ǵ��ư�						(�ǵ��ư� = ����Լ��� Ǯ��)
	// 3. �������� �ִ��� Ȯ�� => ������ ����
	// 4. �ٽ� 1�� ���� �ݺ�

	printf("\n\n---preorder---\n");
	preorder(&root);

	printf("\n\n---postorder---\n");
	postorder(&root);
}