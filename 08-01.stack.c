/*	코드 작성 팁

	1. 대입 연산자는 일반적으로 우변을 먼저 처리한다
	2. 대입 연산자의 양변의 자료형은 같아야 한다
	3. 대입 연산자의 좌변은 공간(=변수), 우변은 결과값을 의미
	4. 함수 호출 시, 전달값과 매개변수의 개수 및 자료형은 같아야 한다
	5. 함수의 정의에서 매개변수와 지역변수는 유사한 성격을 가진다
		- 차이
		지역변수 : 함수 내부에서 선언, 함수 내부에서 값 할당
		매개변수 : 함수 내부에서 선언, 함수 외부에서 값 전달받음

	6. 함수 이름 앞의 자료형은 함수의 반환값의 자료형과 같다
	7. 함수의 반환값은 함수가 호출된 곳으로 반환한다

	8. 함수 호출 시 값을 전달하면 참조 단계( * )가 늘어나지 않는다
	9. 함수 호출 시 주소를 전달하면 참조 단계( * )가 늘어난다
		ex)
			- int 의 '값'을 전달하면 매개변수 int 로 받는다
			- int 의 '주소'를 전달하면 매개변수로 int* 로 받는다
			- int* 의 '값'을 전달하면 매개변수로 int* 로 받는다
			- int* 의 '주소'를 전달하면 매개변수로 int** 로 받는다

			- Stack 의 '값'을 전달하면 매개변수로 Stack 으로 받는다
			- Stack 의 '주소'를 전달하면 매개변수로 Stack* 로 받는다
			- Stack* 의 '값'을 전달하면 매개변수로 Stack* 로 받는다
			- Stack* 의 '주소'를 전달하면 매개변수로 Stack** 로 받는다
	*/

#include<stdio.h>
#include<stdlib.h>

//struct형 Stack 구성요소 선언
typedef struct stack {
	int data;
	struct stack* link;
}Stack;

Stack* getNode() {
	Stack* tmp;
	//push의 tmp에게 main함수의 top이 가르키는 주소 저장

	tmp = (Stack*)malloc(sizeof(Stack));
	//동적할당

	tmp->data = 0;
	tmp->link = NULL;
	return tmp;
}

void push(Stack** top, int data) {
	Stack* tmp = *top;
	// 한번 참조( * )한 *top 은 main의 top과 같은 공간이다

	*top = getNode();
	// getNode() 함수는 동적할당을 받은 주소를 반환해주는 함수
	// 즉, 반환된 주소를 *top 에 저장하는데, *top은 main의 top과 같은 공간

	(*top)->data = data;
	//=>	(**top).data = num;
	//main의 top 가르키는 주소 구조체 data에 data저장
	(*top)->link = tmp;
	//main의 top 가르키는 주소 구조체 link에 tmp저장
}

/*
int pop(Stack** top) {

}
*/

int main() {
	// 1. 정수를 저장하는 data와 본인과 같은 자료형을 가리키는 link를 가진 자료형 Stack 생성
	Stack* top = NULL; // main의 top의 용도는
					   // heap 영역에 동적할당된 데이터를 가리키는 용도

	// 2. Stack 구조에 데이터를 입력하는 함수인 push 구현
	push(&top, 10);
	push(&top, 20);
	push(&top, 30);

	printf("top : %d -> %d -> %d\n", top->data, top->link->data, top->link->link->data);

	free(top);
}