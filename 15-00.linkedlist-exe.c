#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct node {
	int data;
	struct node* link;
}List;


List* getNode() {
	List* newnode = (List*)malloc(sizeof(List));
	newnode->link = NULL;
	return newnode;
}

void add(List** head, int num) {
	if (*head == NULL) {
		*head = getNode();
		(*head)->data = num;
		return;
	}

	//	add(List** head, int num)
	add(&(*head)->link, num);
}

void printList(List* head) {
	while (head != NULL) {
		printf("%d -> ", head->data);
		head = head->link;
	}
	printf("\b\b \b\b \n");
}

void del(List** head, int num) {
	if (*head == NULL) {
		printf("%d >>> ���� ������\n", num);
		return;
	}

	if ((*head)->data == num) {
		List* tmp = *head;
		*head = (*head)->link;

		free(tmp);
		return;
	}

	//	del(List** head, int num)
	del(&(*head)->link, num);
}

void modify(List** head, int target, int replace) {
	if (*head == NULL) {
		printf("%d >>> ���� ������\n", target);
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
		printf("%d >>> ���� ������\n", target);
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

void sort(List** head) {
	int tmp, count = 0;
	List* back = *head;

	while (1) {

		count = 0;
		back = *head;

		while (back->link != NULL) {
			if (back->data > back->link->data) {
				// ���� ������ > ���� ������
				tmp = back->data;
				back->data = back->link->data;
				back->link->data = tmp;

				count++;
			}

			back = back->link;
		}

		if (count == 0)		break;

	}

}

/*
List * sort(List* head)
{
	List *p, *temp;
	p = head;

	while (p->link != NULL) {
		if (p->data > p->link->data)
		{
			temp = p->link; // ������ �Űܾ��� ��带 temp�� ����
			p->link = p->link->link; // temp ���� ���� �մϴ�.
			temp->link = head; // temp�� link�� ���� ù �ڸ�
			head = p = temp; // �׸��� p�� head ��� temp�� �ʱ�ȭ ��� ���� ù�ڸ���
			printf("\n");
			continue; // ���� ù �ڸ��� �� p�� ���� p = p->link�� ���ؼ� ������ ���� ���ϵ��� ���� ����
		}
		p = p->link;
	}
	return head;
}
*/

int main() {
	int inputnum = 0, inputnum2 = 0;
	List* head = NULL;
	srand(time(NULL));

	while (1) {
		int menu;

		printf("=============== �޴� ===============\n");
		printf("\t1. add(�߰�)\n");
		printf("\t2. modify(����)\n");
		printf("\t3. insert(�߰��� �߰�)\n");
		printf("\t4. printList(���)\n");
		printf("\t5. del(����)\n");
		printf("\t6. random(10��)\n");
		printf("\t7. sort(����)\n");
		printf("\t8. exit(����)\n");
		printf("==================================\n");
		printf("\tinput >>> ");	scanf_s("%d", &menu);

		switch (menu) {
		case 1:
			printf("==================================\n");
			printf("now : ");
			printList(head);
			printf("----------------------------------\n");
			printf("input num : ");
			scanf_s("%d", &inputnum);
			add(&head, inputnum);
			printf("----------------------------------\n");
			printf("now : ");
			printList(head);
			break;
		case 2:
			printf("==================================\n");
			printf("now : ");
			printList(head);
			printf("----------------------------------\n");
			printf("input target : ");
			scanf_s("%d", &inputnum);
			printf("input data you want to change : ");
			scanf_s("%d", &inputnum2);
			modify(&head, inputnum, inputnum2);
			printf("----------------------------------\n");
			printf("now : ");
			printList(head);
			break;
		case 3:
			printf("==================================\n");
			printf("now : ");
			printList(head);
			printf("----------------------------------\n");
			printf("input target : ");
			scanf_s("%d", &inputnum);
			printf("input data you want to insert : ");
			scanf_s("%d", &inputnum2);
			insert(&head, inputnum, inputnum2);
			printf("----------------------------------\n");
			printf("now : ");
			printList(head);
			break;
		case 4:
			printf("==================================\n");
			printf("now : ");
			printList(head);
			break;
		case 5:
			printf("==================================\n");
			printf("now : ");
			printList(head);
			printf("----------------------------------\n");
			printf("input data you want to delete : ");
			scanf_s("%d", &inputnum);
			del(&head, inputnum);
			printf("now : ");
			printList(head);
			break;
		case 6:
			printf("==================================\n");
			printf(">>>>random input : 1~100<<<< \n");
			srand(time(NULL));	// �������� �پ��ϰ� ������ �ϴ� �Լ�

			for (int i = 0; i < 10; i++) {
				// rand()�� ������ ������ ��ȯ, ���� 0 ~ 32,767
				add(&head, rand() % 100 + 1);
				//1 ~ 100
			}
			printf("now : ");
			printList(head);
			break;
		case 7:
			printf("==================================\n");
			printf("* sort *\n");
			printf("before : ");
			printList(head);
			sort(&head);
			printf("----------------------------------\n");
			printf("after : ");
			printList(head);
			break;
		case 8:
			printf("==================================\n");
			clear(&head);
			printf("now : ");
			printList(head);
			return 0;
		default:
			printf("==================================\n");
			printf("���� �޴� �Դϴ�\n");
		}

		system("pause");
		printf("==================================\n");
		system("cls");
	}
}