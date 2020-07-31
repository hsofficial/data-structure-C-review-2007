/*
�������� : ����, ť, �迭, ���Ḯ��Ʈ ��
�迭 : ���ӵ� ������ ������, index��� ������ȣ�� ����, ũ�Ⱑ ���������� ����, �������� �߰� �� �߰� ���� �������
���Ḯ��Ʈ : ���ӵ� ������ �ƴ�, �����ͺ����� �ּҸ� ���� �̾� ���� ����, ũ�Ⱑ ������, �������� �߰� �� �߰� ���� ����

���Ḯ��Ʈ
���� : �߰� �� �߰� ���� ����, ũ�Ⱑ ������(�޸� ����)
���� : ������ �����, index�� �����ϴ� �迭���� ������
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node* link;
}Linkedlist;

Linkedlist* getNode() {
	Linkedlist* new = (Linkedlist*)malloc(sizeof(Linkedlist));
	new->link = NULL;
	return new;
}

/*
//�ݺ���
void add(Linkedlist** head, int num) {
	printf("insert �۾��� �����մϴ�.\n");
	printf("input data is %d.\n", num);
	printf("-----------------------------------------------\n");
	if (*head == NULL) {
		*head = getNode();
		(*head)->data;

	}
	else{
		Linkedlist* tmp = *head;

		while (tmp != NULL) {
			tmp = tmp->link;
		}// head�� ���纻�� tmp�� ����Ʈ �� �ڷ� �̵�

		tmp = getNode();
		tmp->link->data = num;

	}
}
*/
void add(Linkedlist** head, int num) {
	if (*head == NULL)
	{
		*head = getNode();
		(*head)->data = num;

		return;		// ����Լ��� ������ ���� return
	}

// ����Լ� : �Լ� ���ο��� �ڽ��� ȣ��
//	add(Linkedlist** head, int num)
	add(&(*head)->link,num);

// ���⼭ ��͵Ǵ� �ǹ�
// 1. �ϴ� ���ͼ� ���� head�� Ȯ��
// if => ��������� => �� ��ġ�� ���� ����� ������ ����
// ������� ������ => ���� ��ġ�� '����'


}

//������Լ��� ����
//������ head���� EMPTY�϶� �� �ƴҶ��� ������ ����
//head���� EMPTY�϶� �����Ҵ�� �ּҸ� ��ȯ�޾� �־��ְ� return
//�ƴ� �ÿ��� head�� ����Ű�� �ִ� ����ü�� link�� �ּҷ� ����Լ� ȣ��

//������Լ� ���� ����
//������ head���� EMPTY�϶� �� �ƴҶ��� ������ ����
//�ƴҽÿ��� ������ head���� ���� link �ȿ� �ִ� ���� EMPTY�� ���� �˻� �� 
//ã���� �� �� �ȿ� �����Ҵ�� �ּҸ� �־���

void printList(Linkedlist* head) {
	while (head != NULL) {
		printf("%d -> ", head->data);
		head = head->link;
	}
	printf("\b\b \b\b \n");
}


int main() {
	Linkedlist* head = NULL;

	add(&head, 10);		// add�� �� �ڿ� �����͸� �߰��ϴ� �Լ�
	add(&head, 10);
	add(&head, 10);
	printList(head);
	// 10 -> 20 -> 30

	printf("���� �� : %d\n", del(&head, 20));
	printList(head);
	// 10 -> 30
}