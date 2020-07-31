/*
 F11 -> ����� ���� : �Լ� ���� ����
 F10 -> ����� ���� : �Լ� �پ�Ѿ� ����
 F9 -> ���� Ŀ�� ��ġ ���� break point�� ����
 F5 -> ����� ���� : break point���� �����ϰ� ����
*/
#include<stdio.h>
#include<stdint.h>
#include<string.h>

typedef struct stack {
	int data;
	char word[20];
	struct stack* link;
}Stack;

Stack* getNode() {
	Stack* node = (Stack*)malloc(sizeof(Stack));
	node->data = 0;
	node->link = NULL;
	return node;
}

void push(Stack** top, int num, char wordin[20]) {
	Stack* tmp = *top;
	*top = getNode();
	(*top)->data = num;
	(*top)->link = tmp;
	strcpy((*top)->word,wordin);
}

int pop(Stack** top) {
	if (!top) {		// top == NULL
	
		printf("Underflow\n");
		return -1;
	}

	int num = (*top)->data;
	Stack* tmp = *top;

	*top = (*top)->link;

	printf("char-chk : %s\n", (*top)->word);

	free(tmp);

	return num;
}

void printStack(Stack** top) {
	Stack* tmp = *top;

	while (tmp != NULL)
	{
		printf("%d ", tmp->data);
		tmp = tmp->link;
	}
	printf("\n");
}

void printStack2(Stack* top) {
	while (top != NULL) {
		printf("%d ", top->data);
		top = top->link;
	}
	printf("\n");
}

void clear(Stack** top) {
	while (*top != NULL) {
		Stack* tmp = *top;
		*top = (*top)->link;

		printf("%d �Ҵ�����\n", tmp->data);
		free(tmp);
	}
}

int main() {
	Stack* top = NULL;

	push(&top, 10, "ù��°");
	push(&top, 20, "�ι�°");
	push(&top, 30, "����°");
	push(&top, 40, "�׹�°");

	printStack(&top);	//	���� ���θ� ��� ������ִ� �Լ�
	printStack2(top);

	printf("������ : %d\n", pop(&top));		// ������ : 100
	printf("������ : %d\n", pop(&top));		// ������ : 90
	printf("������ : %d\n", pop(&top));		// ������ : 80

	clear(&top);		// ���ÿ� ���� �����͸� ��� �Ҵ� �����ϴ� �ڵ�

	printf("������ : %d\n", pop(&top));		// ������ : -1

}