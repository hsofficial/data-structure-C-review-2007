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
	if (*front == NULL) {	// *front �� NULL �̶�� => ��, main�� front�� ���������
		// �� ó�� �Է� �Ҷ�
		*front = getNode();
		*rear = *front;		// *front�� *rear�� ���� ��ġ�� ����Ű��
		(*front)->data = num;
	}

	else {
		// ó���� �ƴҶ�
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
	Queue* front = NULL;	// ť�� ���� �� �����͸� ����ų ������
	Queue* rear = NULL;		// ť�� ���� �� �����͸� ����ų ������

	enqueue(&front, &rear, 10);
	enqueue(&front, &rear, 20);
	enqueue(&front, &rear, 30);

	printf("%d -> %d -> %d\n", front->data, front->link->data, front->link->link->data);
	// ���) 10 -> 20 -> 30

	printf("���� �� : %d\n", dequque(&front));	// 10
	printf("���� �� : %d\n", dequque(&front));	// 20
	printf("���� �� : %d\n", dequque(&front));	// 30
	printf("���� �� : %d\n", dequque(&front));	// -1
}