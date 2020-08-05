#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node* left;
	struct node* right;
}Tree;

Tree* getNode() {
	Tree* newnode = (Tree*)malloc(sizeof(Tree));
	newnode->left = newnode->right = NULL;
	return newnode;
}

void insert(Tree** root, int num) {
	if (*root == NULL) {
		*root = getNode();
		(*root)->data = num;
		return;
	}

	if ((*root)->data > num)		insert(&(*root)->left, num);
	if ((*root)->data < num)		insert(&(*root)->right, num);
}

void preorder(Tree** root) {
	if (*root == NULL) printf("데이터가 없습니다\n");
	else {
		printf(">>> %d ", (*root)->data);
		if ((*root)->left != NULL)		preorder(&(*root)->left);
		if ((*root)->right != NULL)		preorder(&(*root)->right);
	}
}

void inorder(Tree** root) {
	if (*root == NULL) printf("데이터가 없습니다\n");
	else {
		if ((*root)->left != NULL)		inorder(&(*root)->left);
		printf(">>> %d ", (*root)->data);
		if ((*root)->right != NULL)		inorder(&(*root)->right);
	}
}

void postorder(Tree** root) {
	if (*root == NULL) printf("데이터가 없습니다\n");
	else {
		if ((*root)->left != NULL)		postorder(&(*root)->left);
		if ((*root)->right != NULL)		postorder(&(*root)->right);
		printf(">>> %d ", (*root)->data);
	}
}

Tree* minNode(Tree** right) {
	if ((*right)->left != NULL) 
	{
		return minNode(&(*right)->left);
	}		
	else 
	{
		return *right;
	}							
}

Tree* maxNode(Tree** left) {
	if ((*left)->right != NULL)
	{
		return maxNode(&(*left)->right);
	}
	else
	{
		return *left;
	}
}

void del(Tree** root, int num) {
	if (*root == NULL)
	{
		printf("\n%d >>> 없는 데이터\n", num);
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
		else if ((*root)->left == NULL)
		{
			*root = (*root)->right;
			free(tmp);
		}
		else if ((*root)->right == NULL)
		{
			*root = (*root)->left;
			free(tmp);
		}
		else
		{
			Tree* min = minNode(&(*root)->right);
			Tree* max = maxNode(&(*root)->left);

			printf("max = %d\n", max->data);
			printf("min = %d\n", min->data);

			int result_max = (*root)->data - max->data;
			int result_min = (*root)->data - min->data;

			if (result_max < -(result_min))
			{
				(*root)->data = max->data;
				del(&(*root)->left, max->data);
			}

			else
			{
				(*root)->data = min->data;
				del(&(*root)->right, min->data);
			}
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

	printf("전위 순회 : ");	preorder(&root);	printf("\n");
	printf("중위 순회 : ");	inorder(&root);		printf("\n");
	printf("후위 순회 : ");	postorder(&root);	printf("\n");

	del(&root, 17);
	printf("중위 순회 : ");	inorder(&root);		printf("\n");

	del(&root, 57);
	printf("중위 순회 : ");	inorder(&root);		printf("\n");

	del(&root, 63);
	printf("중위 순회 : ");	inorder(&root);		printf("\n");

	del(&root, 55);		// 없는 데이터
	printf("중위 순회 : ");	inorder(&root);		printf("\n");

	printf("\n============= 양쪽 자식 노드 =============\n\n");

	printf("전위 순회 : ");	preorder(&root);		printf("\n");
	del(&root, 45);		// 양쪽 자식 노드를 가진 노드 제거
	printf("전위 순회 : ");	preorder(&root);		printf("\n");

	del(&root, 73);
	printf("전위 순회 : ");	preorder(&root);		printf("\n");


	clear(&root);
	printf("\n중위 순회 : ");	inorder(&root);		printf("\n");
}