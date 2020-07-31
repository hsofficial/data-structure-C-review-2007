#include<stdio.h>

// �ڱ� ���� ����ü : ���ο� ��������� �ڱ� �ڽ��� �ڷ����� ����Ű�� �� �ִ� ������ ������ ���� ����ü

typedef struct node {
	int data;
	struct node* link;
}Node;

int main() {
	//		  data, link
	Node n1 = { 10, NULL };
	Node n2 = { 20, NULL };	//	NULL = 0 = '\0'
	Node n3 = { 30, NULL };

	n1.link = &n2;
	n2.link = &n3;
	n3.link = &n1;
	// ���) n1 -> n2 -> n3 -> n1 -> n2 .......

	printf("n1 = %d\n", n1.data);
	printf("n1.link = %d\n", n1.link->data);

	printf("n2 = %d\n", n2.data);
	printf("n2.link = %d\n", n2.link->data);

	printf("n3 = %d\n", n3.data);
	printf("n3.link = %d\n\n", n3.link->data);

	// ����) n1 �� ������ �Ʒ��� ���� ���
	// ��� : 10 -> 20 -> 30
	printf("n1 = %d\n", n1.data);
	printf("n2 = %d\n", n1.link->data);
	printf("n3 = %d\n\n", n1.link->link->data);

	printf("n2 = %d\n", n2.data);
	printf("n3 = %d\n", n2.link->data);
	printf("n1 = %d\n\n", n2.link->link->data);

	printf("n3 = %d\n", n3.data);
	printf("n1 = %d\n", n3.link->data);
	printf("n2 = %d\n\n", n3.link->link->data);
}