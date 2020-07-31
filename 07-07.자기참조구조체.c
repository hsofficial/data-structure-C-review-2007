#include<stdio.h>

// 자기 참조 구조체 : 내부에 멤버변수로 자기 자신의 자료형을 가리키릴 수 있는 포인터 변수를 가진 구조체

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
	// 결과) n1 -> n2 -> n3 -> n1 -> n2 .......

	printf("n1 = %d\n", n1.data);
	printf("n1.link = %d\n", n1.link->data);

	printf("n2 = %d\n", n2.data);
	printf("n2.link = %d\n", n2.link->data);

	printf("n3 = %d\n", n3.data);
	printf("n3.link = %d\n\n", n3.link->data);

	// 문제) n1 만 가지고 아래와 같이 출력
	// 출력 : 10 -> 20 -> 30
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