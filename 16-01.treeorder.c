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

void del(Tree** root, int num) {
	
	if (*root == NULL) {
		printf("\n%d >>> 없는 데이터", num);
		return;
	}
	// 1. 탐색 => 지우려는 데이터까지 찾아 들어간다 => 들어가는 것을 재귀로 처리
	if ((*root)->data > num) {
		del(&(*root)->left, num);
	}

	else if ((*root)->data < num) {
		del(&(*root)->right, num);
	}
	else
	// 2. 같을 때 => 데이터를 찾음 => 지워야
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
		srand(time(NULL));	// 랜덤값을 다양하게 나오게 하는 함수
		for (int i = 0; i < 10; i++) {
			// rand()는 무작위 정수를 반환, 범위 0 ~ 32,767
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

// 전위 순회 : root -> left -> right
// ㄴ> root부터 확인 => root의 변화를 탐지 용이

// 중위 순회 : left -> root -> right
// ㄴ> 오름차순으로 확인 가능

// 후위 순회 : left -> right -> root
// ㄴ> 말단노드부터 거슬러 올라와 가장 마지막에 root 참조
// ㄴ> clear함수 짜는데 이용하면 좋음

	del(&root, 17);		// 말단 노드 제거
	printf("\n------------------------\n중위 순회 : ");	inorder(&root);		printf("\n");

	del(&root, 57);		// 왼쪽 자식 노드를 가진 노드 제거
	printf("\n------------------------\n중위 순회 : ");	inorder(&root);		printf("\n");

	del(&root, 63);		// 오른쪽 자식 노드를 가진 노드 제거
	printf("\n------------------------\n중위 순회 : ");	inorder(&root);		printf("\n");

	del(&root, 80);		// 없는 값 제거시 오류 처리
	printf("\n------------------------\n중위 순회 : ");	inorder(&root);		printf("\n");

	root = NULL;
}