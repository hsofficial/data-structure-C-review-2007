#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node* link;	// Node* link;
}Node;

Node* getNode() {
	Node* tmp = (Node*)malloc(sizeof(Node));
	tmp->data = 0;
	tmp->link = NULL;
	return tmp;
}

int main() {
	// 1. ������ ������ ������ �����Ҵ� ��ġ�� ��������
	//(1 - 2, �����Ҵ� �Լ��� ������ �غ��ϴ�)
	Node* n1 = getNode();
	Node* n2 = getNode();
	Node* n3 = getNode();

	// 2. n1 = 10, n2 = 20, n3 = 30;
	//n1 -> n2, n2 -> n3 , n3 -> n1;
	n1->data = 10;
	n2->data = 20;
	n3->data = 30;

	n1->link = n2;	// n1 -> n2
	n2->link = n3;	// n2 -> n3
	n3->link = n1;	// n3 -> n1
					// ���) n1 -> n2 -> n3 -> n1 -> n2 .......

	printf("n1 = %d\n", n1->data);
	printf("n1.link = %d\n", n1->link->data);

	printf("n2 = %d\n", n2->data);
	printf("n2.link = %d\n", n2->link->data);

	printf("n3 = %d\n", n3->data);
	printf("n3.link = %d\n", n3->link->data);

	// 4. �����Ҵ� ����
	free(n1);
	free(n2);
	free(n3);
}