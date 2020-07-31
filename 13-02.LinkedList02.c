#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node* link;
}list;

list* getNode() {
	list* newnode;
	newnode = (list*)malloc(sizeof(list));
	newnode->link = NULL;
	return newnode;
}

void add(list** head, int num) {
	if (*head == NULL)
	{
		*head = getNode();
		(*head)->data = num;

		return;
	}
	add(&(*head)->link, num);
}

void del(list** head, int num) {
	if ((*head)->data == num)
	{
		list* tmp = *head;
		*head = (*head)->link;
		free(tmp);
		return;
	}
	del(&(*head)->link, num);
}


void printList(list* head) {
	while (head != NULL) {
		printf("%d -> ", head->data);
		head = head->link;
	}
	printf("\b\b \b\b \n");
}


int main() {
	list* head = NULL;

	add(&head, 10);		// add는 맨 뒤에 데이터를 추가하는 함수
	add(&head, 20);
	add(&head, 30);

	printList(head);
	// 10 -> 20 -> 30

	del(&head, 20);		// 중간값 제거
	printList(head);	// 10 -> 30

	del(&head, 30);		// 맨 뒤값 제거
	printList(head);	// 10

	del(&head, 10);
	printList(head);	// \n
}