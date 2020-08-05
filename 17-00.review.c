#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node* left, * right;
}Tree;

Tree* getNode() {
	Tree* new = (Tree*)malloc(sizeof(Tree));
	new->left = NULL;
	new->right = NULL;
	return new;
}

void insert(Tree** root, int num) {
	if (*root == NULL)
	{
		*root = getNode();
		(*root)->data = num;
		return;
	}
	if ((*root)->data > num)
	{
		insert(&(*root)->left, num);
	}
	if ((*root)->data > num)
	{
		insert(&(*root)->right, num);
	}
}

void preorder(Tree** root) {
	if (*root == NULL) printf("�����Ͱ� �����ϴ�\n");
	else {
		printf(">>> %d ", (*root)->data);
		if ((*root)->left != NULL)		preorder(&(*root)->left);
		if ((*root)->right != NULL)		preorder(&(*root)->right);
	}
}

void inorder(Tree** root) {
	if (*root == NULL) printf("�����Ͱ� �����ϴ�\n");
	else {
		if ((*root)->left != NULL)		inorder(&(*root)->left);
		printf(">>> %d ", (*root)->data);
		if ((*root)->right != NULL)		inorder(&(*root)->right);
	}
}

void postorder(Tree** root) {
	if (*root == NULL) printf("�����Ͱ� �����ϴ�\n");
	else {
		if ((*root)->left != NULL)		postorder(&(*root)->left);
		if ((*root)->right != NULL)		postorder(&(*root)->right);
		printf(">>> %d ", (*root)->data);
	}
}

Tree* minNode(Tree* right) {
	if (right->left != NULL)
	{
		return minNode(right->left);
	}
	else
	{
		return right;
	}

}

void del(Tree** root, int num) {
	if (*root == NULL)
	{
		printf("\n%d >>> ���� ������\n", num);
		return;
	}

	// 1. Ž�� => ���� �����͸� Ʈ�� ���ο��� ã�´�
	if ((*root)->data > num)		del(&(*root)->left, num);
	else if ((*root)->data < num)	del(&(*root)->right, num);
	else {
		// 2. �����͸� ã�� => ����
		Tree* tmp = *root;

		if ((*root)->left == NULL && (*root)->right == NULL) {
			*root = NULL;
			free(tmp);
		}
		else if ((*root)->left == NULL) {
			*root = (*root)->right;
			free(tmp);
		}
		else if ((*root)->right == NULL) {
			*root = (*root)->left;
			free(tmp);
		}
		else {	// ���� �ڽĳ�带 �� ����
			// �ڽĳ�尡 2���϶� ��� ��ü�� �����ϸ� �ȵȴ�
			// �̷��� ���� ������ ����, ��ü���� ã�Ƽ� ���� �ٲ��ش�

			// ��ü���� ã�� �˰���
			// 1. ���� ��� ���ʿ��� ���� ������ �Ʒ��� �����͸� �����´�
			// ��> ���� ��庸�� ������ �� �� ���� ū �����͸� �ǹ�
			// 2. ���� ��� �����ʿ��� ���� ���� �Ʒ��� �����͸� �����´�
			// ��> ���� ��庸�� ũ���� �� �� ���� ���� �����͸� �ǹ�


			Tree* min = minNode((*root)->right);	// ���� ���� ã�� �Լ�
			(*root)->data = min->data;		// ã�� ��ü���� ���� root ������ ���
			del(&(*root)->right, min->data);	// ��ü�ϰ� ���� ���� del�� �̿��ؼ�
												// ����
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

	del(&root, 17);
	printf("���� ��ȸ : ");	inorder(&root);		printf("\n");

	del(&root, 57);
	printf("���� ��ȸ : ");	inorder(&root);		printf("\n");

	del(&root, 63);
	printf("���� ��ȸ : ");	inorder(&root);		printf("\n");

	del(&root, 55);		// ���� ������
	printf("���� ��ȸ : ");	inorder(&root);		printf("\n");

	printf("\n============= ���� �ڽ� ��� =============\n\n");

	printf("���� ��ȸ : ");	preorder(&root);		printf("\n");
	del(&root, 45);		// ���� �ڽ� ��带 ���� ��� ����
	printf("���� ��ȸ : ");	preorder(&root);		printf("\n");

	clear(&root);
	printf("\n���� ��ȸ : ");	inorder(&root);		printf("\n");
}