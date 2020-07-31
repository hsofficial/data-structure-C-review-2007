#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node* link;
}List;

List* getNode() {
	List* new = (List*)malloc(sizeof(List));
	new->link = NULL;
	return new;
}

void add(List** head, int num) {
	if (*head == NULL)
	{
		*head = getNode();
		(*head)->data = num;
		return;
	}
	add(&(*head)->link, num);
}

void printList(List* head) {
	while (head != NULL)
	{
		printf("%d -> ", head->data);
		head = head->link;
	}
	printf("\b\b \b\b \n");
}

void del(List** head, int num) {
	if (*head == NULL) {
		printf("%d >>> 없는 데이터\n", num);
		return;
	}

	if ((*head)->data == num)
	{
		List* tmp = *head;
		*head = (*head)->link;
		free(tmp);
		return;
	}
	del(&(*head)->link, num);
}

void modify(List** head, int target, int replace) {
	if (*head == NULL) {
		printf("%d >>> 없는 데이터\n", target);
		return;
	}

	if ((*head)->data == target) {
		(*head)->data = replace;
		return;
	}

	//	modify(List** head, int target, int replace)
	modify(&(*head)->link, target, replace);
}

void insert(List** head, int target, int input) {
	if (*head == NULL) {
		printf("%d >>> 없는 데이터\n", target);
		return;
	}

	if ((*head)->data == target) {
		List* tmp = getNode();
		tmp->data = input;
		tmp->link = (*head)->link;
		(*head)->link = tmp;

		return;
	}

	//	insert(List** head, int target, int input)
	insert(&(*head)->link, target, input);
}

void clear(List** head) {
	while (*head != NULL) {
		List* tmp = *head;
		*head = (*head)->link;
		free(tmp);
	}
}

int main() {
	List* head = NULL;

	for (int i = 10; i <= 100; i += 10) {
		add(&head, i);
	}

	printList(head);
	// 10 -> 20 -> 30 -> 40 -> 50 -> ... 90 -> 100

	del(&head, 30);		// 중간 제거
	printList(head);
	// 10 -> 20 -> 40 -> 50 -> ... 90 -> 100

	del(&head, 10);		// 맨 앞 제거
	printList(head);
	// 20 -> 40 -> 50 -> ... 90 -> 100

	del(&head, 100);	// 맨 뒤 제거
	printList(head);
	// 20 -> 40 -> 50 -> ... 90

	del(&head, 30);
	printList(head);


	// modify(수정)
	modify(&head, 40, 42);
	printList(head);
	// 20 -> 42 -> 50 -> ... 90

	// insert(삽입)
	insert(&head, 42, 77);
	printList(head);
	// 20 -> 42 -> 77 -> 50 -> .... 90

	clear(&head);		// 전부 제거
	printList(head);	// 출력 x
}