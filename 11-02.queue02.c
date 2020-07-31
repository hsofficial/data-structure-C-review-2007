#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node* link;
}Queue;

Queue* getNode() {
	Queue* new = (Queue*)malloc(sizeof(Queue));
	new->link = NULL;
	return new;
}

void enqueue(Queue** front, Queue** rear, int num) {
	printf("####enqueue code is running####\n.\n");
	if (*front == NULL)
	{
		*front = getNode();
		*rear = *front;
		(*front)->data = num;
	}
	else
	{
		Queue* tmp = *rear;
		*rear = getNode();
		(*rear)->data = num;

		tmp->link = *rear;
	}
}

int dequeue(Queue** front) {
	printf("####dequeue code is running####\n");
	if (*front == NULL)
	{
		printf(">>>>queue is empty.\n");
		return -1;
	}
	Queue* tmp = *front;
	int num = (*front)->data;
	*front = (*front)->link;

	free(tmp);

	return num;
}

void printQueue(Queue* front) {
	printf("####printQueue code is running####\n");
	while (front)
	{
		printf("%d -> ", front->data);
		front = front->link;
	}
	printf("\b\b \b\b \n");
}

void clear(Queue** front) {
	printf("####clear code is running####\n.\n");
	while (*front)
	{
		Queue* tmp = *front;
		*front = (*front)->link;
		free(tmp);
	}
}

int main() {
	Queue* front;
	Queue* rear;

	front = rear = NULL;

	for (int i = 10; i <= 100; i += 10) {
		enqueue(&front, &rear, i);
	}

	printQueue(front);
	// 10 ~ 100

	printf("²¨³½°ª : %d\n", dequeue(&front));	// 10
	printf("²¨³½°ª : %d\n", dequeue(&front));	// 20
	printf("²¨³½°ª : %d\n", dequeue(&front));	// 30

	printQueue(front);

	clear(&front);

	printf("²¨³½°ª : %d\n", dequeue(&front));	// -1
	printQueue(front);

}