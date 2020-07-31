/*	�ڵ� �ۼ� ��

	1. ���� �����ڴ� �Ϲ������� �캯�� ���� ó���Ѵ�
	2. ���� �������� �纯�� �ڷ����� ���ƾ� �Ѵ�
	3. ���� �������� �º��� ����(=����), �캯�� ������� �ǹ�
	4. �Լ� ȣ�� ��, ���ް��� �Ű������� ���� �� �ڷ����� ���ƾ� �Ѵ�
	5. �Լ��� ���ǿ��� �Ű������� ���������� ������ ������ ������
		- ����
		�������� : �Լ� ���ο��� ����, �Լ� ���ο��� �� �Ҵ�
		�Ű����� : �Լ� ���ο��� ����, �Լ� �ܺο��� �� ���޹���

	6. �Լ� �̸� ���� �ڷ����� �Լ��� ��ȯ���� �ڷ����� ����
	7. �Լ��� ��ȯ���� �Լ��� ȣ��� ������ ��ȯ�Ѵ�

	8. �Լ� ȣ�� �� ���� �����ϸ� ���� �ܰ�( * )�� �þ�� �ʴ´�
	9. �Լ� ȣ�� �� �ּҸ� �����ϸ� ���� �ܰ�( * )�� �þ��
		ex)
			- int �� '��'�� �����ϸ� �Ű����� int �� �޴´�
			- int �� '�ּ�'�� �����ϸ� �Ű������� int* �� �޴´�
			- int* �� '��'�� �����ϸ� �Ű������� int* �� �޴´�
			- int* �� '�ּ�'�� �����ϸ� �Ű������� int** �� �޴´�

			- Stack �� '��'�� �����ϸ� �Ű������� Stack ���� �޴´�
			- Stack �� '�ּ�'�� �����ϸ� �Ű������� Stack* �� �޴´�
			- Stack* �� '��'�� �����ϸ� �Ű������� Stack* �� �޴´�
			- Stack* �� '�ּ�'�� �����ϸ� �Ű������� Stack** �� �޴´�
	*/

#include<stdio.h>
#include<stdlib.h>

//struct�� Stack ������� ����
typedef struct stack {
	int data;
	struct stack* link;
}Stack;

Stack* getNode() {
	Stack* tmp;
	//push�� tmp���� main�Լ��� top�� ����Ű�� �ּ� ����

	tmp = (Stack*)malloc(sizeof(Stack));
	//�����Ҵ�

	tmp->data = 0;
	tmp->link = NULL;
	return tmp;
}

void push(Stack** top, int data) {
	Stack* tmp = *top;
	// �ѹ� ����( * )�� *top �� main�� top�� ���� �����̴�

	*top = getNode();
	// getNode() �Լ��� �����Ҵ��� ���� �ּҸ� ��ȯ���ִ� �Լ�
	// ��, ��ȯ�� �ּҸ� *top �� �����ϴµ�, *top�� main�� top�� ���� ����

	(*top)->data = data;
	//=>	(**top).data = num;
	//main�� top ����Ű�� �ּ� ����ü data�� data����
	(*top)->link = tmp;
	//main�� top ����Ű�� �ּ� ����ü link�� tmp����
}

/*
int pop(Stack** top) {

}
*/

int main() {
	// 1. ������ �����ϴ� data�� ���ΰ� ���� �ڷ����� ����Ű�� link�� ���� �ڷ��� Stack ����
	Stack* top = NULL; // main�� top�� �뵵��
					   // heap ������ �����Ҵ�� �����͸� ����Ű�� �뵵

	// 2. Stack ������ �����͸� �Է��ϴ� �Լ��� push ����
	push(&top, 10);
	push(&top, 20);
	push(&top, 30);

	printf("top : %d -> %d -> %d\n", top->data, top->link->data, top->link->link->data);

	free(top);
}