#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node* link;
}Queue;

Queue* getNode() {
	Queue* new_node = (Queue*)malloc(sizeof(Queue));
	new_node->link = NULL;
	return new_node;
}

void enqueue(Queue** front, Queue** rear, int num) {
	if (*front == NULL) {	// *front 가 NULL 이라면 => 즉, main의 front가 비어있으면
		// 맨 처음 입력 할때
		*front = getNode();
		*rear = *front;		// *front와 *rear가 같은 위치를 가리키게
		(*front)->data = num;
	}

	else {
		// 처음이 아닐때
		Queue* tmp = *rear;
		*rear = getNode();
		(*rear)->data = num;

		tmp->link = *rear;
	}
}

int dequque(Queue** front) {
	if (*front == NULL) {
		printf("Queue is Empty!!\n");
		return -1;
	}

	Queue* tmp = *front;
	int num = (*front)->data;
	*front = (*front)->link;

	free(tmp);

	return num;
}

int main() {
	Queue* front = NULL;	// 큐의 가장 앞 데이터를 가리킬 포인터
	Queue* rear = NULL;		// 큐의 가장 뒷 데이터를 가리킬 포인터

	enqueue(&front, &rear, 10);
	enqueue(&front, &rear, 20);
	enqueue(&front, &rear, 30);

	printf("%d -> %d -> %d\n", front->data, front->link->data, front->link->link->data);
	// 결과) 10 -> 20 -> 30

	printf("꺼낸 값 : %d\n", dequque(&front));	// 10
	printf("꺼낸 값 : %d\n", dequque(&front));	// 20
	printf("꺼낸 값 : %d\n", dequque(&front));	// 30
	printf("꺼낸 값 : %d\n", dequque(&front));	// -1
}