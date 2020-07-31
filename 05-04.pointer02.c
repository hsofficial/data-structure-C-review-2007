#include<stdio.h>
// 포인터 변수 사용처
// 1. 동적할당을 사용하기 위해서
// 2. 함수 호출시 전달한 값을 해당 함수에서 값 변경하기 위해서

void func(int num) {
	num += 10;
	printf("func 내부   ) num = %d\n", num);
}

void pfunc(int* num) {	// 호출시 주소를 전달받음 => 주소를 저장하는 변수 == 포인터 변수
	*num += 10;			// num = &num (main 함수 num의 주소)
	printf("pfunc 내부   ) *num = %d\n", *num);
}

int main() {
	int num = 10;

	printf("func 호출 전) num = %d\n", num);
	func(num);
	printf("func 호출 후) num = %d\n\n", num);

	printf("pfunc 호출 전) num = %d\n", num);
	pfunc(&num);	//전달인자 => 지금 주소를 전달
	printf("pfunc 호출 후) num = %d\n", num);

	/*
	1. 함수 호출시 값을 전달하면 참조(*) 단계가 늘어나지 않는다
	2. 함수 호출시 주소를 전달하면 참조(*) 단계가 늘어난다
	ex.
	- int의 값을 전달하면 매개변수로 int로 받는다
	- int의 주소를 전달하면 매개변수로 int*로 받는다
	- double의 값을 전달하면 매개변수로 double로 받는다
	- double의 주소를 전달하면 매개변수로 double*로 받는다
	함수에 값을 전달하면 해당 함수는 원본을 바꿀 수 없음 (= 사본 전달)
	함수에 주소를 전달하면 해당 함수는 전달받은 원본을 바꿀 수 있음 (= 내 실제 위치를 전달)
	*/

}