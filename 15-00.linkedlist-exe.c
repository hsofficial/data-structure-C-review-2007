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
		printf("%d >>> 없는 데이터\n", num);
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

void sort(List** head) {
	int tmp, count = 0;
	List* back = *head;

	while (1) {

		count = 0;
		back = *head;

		while (back->link != NULL) {
			if (back->data > back->link->data) {
				// 현재 데이터 > 다음 데이터
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
			temp = p->link; // 앞으로 옮겨야할 노드를 temp에 저장
			p->link = p->link->link; // temp 빼고 연결 합니다.
			temp->link = head; // temp의 link는 가장 첫 자리
			head = p = temp; // 그리고 p와 head 모두 temp로 초기화 모두 가장 첫자리로
			printf("\n");
			continue; // 가장 첫 자리로 간 p가 밑의 p = p->link로 인해서 앞으로 가지 못하도록 막는 역할
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

		printf("=============== 메뉴 ===============\n");
		printf("\t1. add(추가)\n");
		printf("\t2. modify(수정)\n");
		printf("\t3. insert(중간값 추가)\n");
		printf("\t4. printList(출력)\n");
		printf("\t5. del(삭제)\n");
		printf("\t6. random(10개)\n");
		printf("\t7. sort(정렬)\n");
		printf("\t8. exit(종료)\n");
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
			srand(time(NULL));	// 랜덤값을 다양하게 나오게 하는 함수

			for (int i = 0; i < 10; i++) {
				// rand()는 무작위 정수를 반환, 범위 0 ~ 32,767
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
			printf("없는 메뉴 입니다\n");
		}

		system("pause");
		printf("==================================\n");
		system("cls");
	}
}