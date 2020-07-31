#include<stdio.h>
#include<stdlib.h>

//typedef struct stack {
//	int data;
//	struct stack* link;
//}Stack;
//
//typedef struct queue {
//	int data;
//	struct queue* link;
//}Queue;

typedef struct node {
	int data;
	struct node* link;
}Node;

Node* getNode() {
	Node* new = (Node*)malloc(sizeof(Node));
	new->link = NULL;
	return new;
}

void enqueue(Node** front, Node** rear, int num) {
	printf("####enqueue code is running####\n.\n");
	if (*front == NULL)
	{
		*front = getNode();
		*rear = *front;
		(*front)->data = num;
	}
	else
	{
		Node* tmp = *rear;
		*rear = getNode();
		(*rear)->data = num;

		tmp->link = *rear;
	}
}

int dequeue(Node** front) {
	printf("####dequeue code is running####\n");
	if (*front == NULL)
	{
		printf(">>>>queue is empty.\n");
		return -1;
	}
	Node* tmp = *front;
	int num = (*front)->data;
	*front = (*front)->link;

	free(tmp);

	return num;
}

void push(Node** top, int num) {
	printf("####push code is running####\n.\n");
	Node* tmp = *top;
	*top = getNode();

	(*top)->data = num;
	(*top)->link = tmp;
}

int pop(Node** top) {
	printf("####pop code is running####\n");
	if (*top == NULL)
	{
		printf(">>>>Stack is empty<<<<\n");
		return -1;
	}

	int num;

	Node* tmp = *top;
	
	num = (*top)->data;
	*top = (*top)->link;

	free(tmp);

	return(num);
}

int main() {
	Node* top = NULL;

	Node* front = NULL;
	Node* rear = NULL;

	//Stack

	push(&top, 10);		push(&top, 20);		push(&top, 30);

	printf("²¨³½ °ª : %d\n", pop(&top));
	printf("²¨³½ °ª : %d\n", pop(&top));
	printf("²¨³½ °ª : %d\n", pop(&top));

	// Queue => enqueue, dequeue
	enqueue(&front, &rear, 10);		enqueue(&front, &rear, 20);		enqueue(&front, &rear, 30);

	printf("²¨³½ °ª : %d\n", dequeue(&front));	// 10
	printf("²¨³½ °ª : %d\n", dequeue(&front));	// 20
	printf("²¨³½ °ª : %d\n", dequeue(&front));	// 30

}