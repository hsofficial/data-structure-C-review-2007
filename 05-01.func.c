#include<stdio.h>

int adder_1(int n1, int n2) { // 매개변수 : 함수 호출시 전달받은 값을 저장하는 변수
	return n1 + n2;
	//함수명(adder_1) 앞의 자료형(int) ==> 반환형 : 함수의 결과인 return 값을 자료형을 의미
	// return 값은 함수의 호출 부분으로 전달
}

void adder_2(int n1, int n2) {
	printf("두 정수의 합 : %d\n", n1 + n2);
}

int main() {
	int num1 = 10, num2 = 20;
	int result = 0;

	result = adder_1(num1, num2);
	// num1 = 10, num2 = 20  ==>  adder_1(10, 20);
	// 함수 호출 => 함수의 값을 전달

	printf("(main)두 정수의 합 : %d\n", result);
	//반환형이 있는 함수 : 함수의 결과로 값이 되돌아오기 때문에 값을 저장하거나 바로 활용
	

	adder_2(num1, num2);
	//반환형이 없는 함수 : 함수의 결과가 되돌아오지 않음 > 이름만 호출
}