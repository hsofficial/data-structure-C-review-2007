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
		printf("\n%d >>> 없는 데이터\n", num);
		return;
	}

	// 1. 탐색 => 지울 데이터를 트리 내부에서 찾는다
	if ((*root)->data > num)		del(&(*root)->left, num);
	else if ((*root)->data < num)	del(&(*root)->right, num);
	else {
		// 2. 데이터를 찾음 => 제거
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
		else {	// 양쪽 자식노드를 다 가짐
			// 자식노드가 2개일땐 노드 자체를 제거하면 안된다
			// 이럴땐 노드는 지우지 말고, 대체값을 찾아서 값을 바꿔준다

			// 대체값을 찾는 알고리즘
			// 1. 현재 노드 왼쪽에서 가장 오른쪽 아래의 데이터를 가져온다
			// ㄴ> 현재 노드보다 작지만 그 중 가장 큰 데이터를 의미
			// 2. 현재 노드 오른쪽에서 가장 왼쪽 아래의 데이터를 가져온다
			// ㄴ> 현재 노드보다 크지만 그 중 가장 작은 데이터를 의미


			Tree* min = minNode((*root)->right);	// 작은 값을 찾는 함수
			(*root)->data = min->data;		// 찾은 대체값을 현재 root 데이터 덮어씀
			del(&(*root)->right, min->data);	// 대체하고 남은 노드는 del를 이용해서
												// 제거
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

	clear(&root);
	printf("\n중위 순회 : ");	inorder(&root);		printf("\n");
}