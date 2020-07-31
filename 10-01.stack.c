/*
 F11 -> 디버깅 진입 : 함수 내부 진입
 F10 -> 디버깅 진입 : 함수 뛰어넘어 실행
 F9 -> 현재 커서 위치 줄을 break point로 설정
 F5 -> 디버깅 진입 : break point까지 실행하고 멈춤
*/
#include<stdio.h>
#include<stdint.h>
#include<string.h>

typedef struct stack {
	int data;
	char word[20];
	struct stack* link;
}Stack;

Stack* getNode() {
	Stack* node = (Stack*)malloc(sizeof(Stack));
	node->data = 0;
	node->link = NULL;
	return node;
}

void push(Stack** top, int num, char wordin[20]) {
	Stack* tmp = *top;
	*top = getNode();
	(*top)->data = num;
	(*top)->link = tmp;
	strcpy((*top)->word,wordin);
}

int pop(Stack** top) {
	if (!top) {		// top == NULL
	
		printf("Underflow\n");
		return -1;
	}

	int num = (*top)->data;
	Stack* tmp = *top;

	*top = (*top)->link;

	printf("char-chk : %s\n", (*top)->word);

	free(tmp);

	return num;
}

void printStack(Stack** top) {
	Stack* tmp = *top;

	while (tmp != NULL)
	{
		printf("%d ", tmp->data);
		tmp = tmp->link;
	}
	printf("\n");
}

void printStack2(Stack* top) {
	while (top != NULL) {
		printf("%d ", top->data);
		top = top->link;
	}
	printf("\n");
}

void clear(Stack** top) {
	while (*top != NULL) {
		Stack* tmp = *top;
		*top = (*top)->link;

		printf("%d 할당해제\n", tmp->data);
		free(tmp);
	}
}

int main() {
	Stack* top = NULL;

	push(&top, 10, "첫번째");
	push(&top, 20, "두번째");
	push(&top, 30, "세번째");
	push(&top, 40, "네번째");

	printStack(&top);	//	스택 내부를 모두 출력해주는 함수
	printStack2(top);

	printf("꺼낸값 : %d\n", pop(&top));		// 꺼낸값 : 100
	printf("꺼낸값 : %d\n", pop(&top));		// 꺼낸값 : 90
	printf("꺼낸값 : %d\n", pop(&top));		// 꺼낸값 : 80

	clear(&top);		// 스택에 남은 데이터를 모두 할당 해제하는 코드

	printf("꺼낸값 : %d\n", pop(&top));		// 꺼낸값 : -1

}