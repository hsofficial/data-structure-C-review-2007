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

void preorder(Tree** root) {	// 전위 순회
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

void postorder(Tree** root) {	// 후위 순회
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
	srand(time(NULL));	// 랜덤값을 다양하게 나오게 하는 함수
	for (int i = 0; i < 10; i++) {
		// rand()는 무작위 정수를 반환, 범위 0 ~ 32,767
		insert(&root, rand() % 100 + 1);
		//1 ~ 100
	}
*/


	printf("---inorder---\n");
	inorder(&root);
	// 중위 순회 : left -> root -> right
	// 1. 맨 처음으로 가장 왼쪽까지 진입 => 없으면 출력		(진입 = 재귀함수 진입)
	// 2. 출력 후 => root로 되돌아감						(되돌아감 = 재귀함수가 풀림)
	// 3. 오른쪽이 있는지 확인 => 있으면 진입
	// 4. 다시 1번 부터 반복

	printf("\n\n---preorder---\n");
	preorder(&root);

	printf("\n\n---postorder---\n");
	postorder(&root);
}