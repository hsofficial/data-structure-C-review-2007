#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

typedef struct stack {
	int data;
	struct stack* link;
}Stack;

Stack* getNode() {
	Stack* node = (Stack*)malloc(sizeof(Stack));
	node->data = 0;
	node->link = NULL;
	return node;
}

void push(Stack** top, int num) {
	Stack* tmp = *top;
	*top = getNode();
	(*top)->data = num;
	(*top)->link = tmp;
}

int pop(Stack** top) {
	if (!top) {		// top == NULL

		printf("Underflow\n");
		return -1;
	}

	int num = (*top)->data;
	Stack* tmp = *top;

	*top = (*top)->link;

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

		printf("%d 할당해제\n", tmp->data);
		free(tmp);
	}
}

int main() {
	int input_n = 0;

	Stack* top = NULL;

	//	bool b1 = true;
	while (true) {
		int menu;

		printf("========= 메뉴 =========\n");
		printf("\t1.push\n");
		printf("\t2.pop\n");
		printf("\t3.printStack\n");
		printf("\t4.exit\n");
		printf("\t>>> ");
		scanf_s("%d", &menu);

		switch (menu) {
		case 1:
			printf("number? : ");
			scanf_s("%d", &input_n);
			push(&top, input_n);
			break;
		case 2:
			printf("꺼낸 값 : %d\n", pop(&top));
			break;
		case 3:
			printStack2(top);
			break;
		case 4:
			return false;
		default:
			printf("없는 메뉴입니다\n");
			break;
		}
		system("pause");
		system("cls");
	}
}