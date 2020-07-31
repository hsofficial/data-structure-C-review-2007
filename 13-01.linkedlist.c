/*
선형구조 : 스택, 큐, 배열, 연결리스트 등
배열 : 연속된 공간을 가지며, index라는 순서번호로 접근, 크기가 유동적이지 못함, 데이터의 중간 값 추가 제거 오버헤드
연결리스트 : 연속된 공간은 아님, 포인터변수로 주소를 서로 이어 놓은 구조, 크기가 유동적, 데이터의 중간 값 추가 제거 용이

연결리스트
장점 : 중간 값 추가 제거 용이, 크기가 유동적(메모리 절약)
단점 : 구현의 어려움, index로 접근하는 배열보다 느리다
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
//반복문
void add(Linkedlist** head, int num) {
	printf("insert 작업을 수행합니다.\n");
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
		}// head의 복사본인 tmp를 리스트 맨 뒤로 이동

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

		return;		// 재귀함수가 끝나기 위한 return
	}

// 재귀함수 : 함수 내부에서 자신을 호출
//	add(Linkedlist** head, int num)
	add(&(*head)->link,num);

// 여기서 재귀되는 의미
// 1. 일단 들어와서 현재 head를 확인
// if => 비어있으면 => 그 위치에 공간 만들고 데이터 저장
// 비어있지 않으면 => 다음 위치로 '진입'


}

//※재귀함수로 구성
//메인의 head값이 EMPTY일때 와 아닐때로 나눠서 구성
//head값이 EMPTY일때 동적할당된 주소를 반환받아 넣어주고 return
//아닐 시에는 head가 가르키고 있는 구조체의 link의 주소로 재귀함수 호출

//※재귀함수 없이 구현
//메인의 head값이 EMPTY일때 와 아닐때로 나눠서 구성
//아닐시에는 메인의 head값을 통해 link 안에 있는 값이 EMPTY인 것을 검색 후 
//찾았을 시 그 안에 동적할당된 주소를 넣어줌

void printList(Linkedlist* head) {
	while (head != NULL) {
		printf("%d -> ", head->data);
		head = head->link;
	}
	printf("\b\b \b\b \n");
}


int main() {
	Linkedlist* head = NULL;

	add(&head, 10);		// add는 맨 뒤에 데이터를 추가하는 함수
	add(&head, 10);
	add(&head, 10);
	printList(head);
	// 10 -> 20 -> 30

	printf("지운 값 : %d\n", del(&head, 20));
	printList(head);
	// 10 -> 30
}