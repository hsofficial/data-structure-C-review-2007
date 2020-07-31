#include<stdio.h>
#include<stdlib.h>

typedef struct stack {
	int data;
	struct stack* link;
}Stack;

Stack* getNode() {
	Stack* tmp = (Stack*)malloc(sizeof(Stack));
	tmp->data = 0;
	tmp->link = NULL;
	return tmp;
}

void push(Stack** top, int num) {
	Stack* tmp = *top;

	*top = getNode();

	(*top)->data = num;
	(*top)->link = tmp;
}

int pop(Stack** top) {
	if ((*top) == NULL)
	{
		printf("Underflow\n");
		return -1;
	}
	Stack* tmp = *top;
	*top = (*top)->link;
	int data = tmp->data;
	free(tmp);

	return data;
}

void main() {
	Stack* top = NULL;
	push(&top, 10);
	push(&top, 20);
	push(&top, 30);

	printf("top : %d -> %d -> %d\n", top->data, top->link->data, top->link->link->data);

	printf("pop : %d\n", pop(&top));
	printf("pop : %d\n", pop(&top));
	printf("pop : %d\n", pop(&top));
	printf("pop : %d\n", pop(&top)); //underflow¹ß»ý 

	free(top);
}