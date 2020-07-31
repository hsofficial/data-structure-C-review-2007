#include<stdio.h>

// typedef : 타입 재정의
typedef int element;
// int 형을 element라는 이름으로 사용하겠다
typedef unsigned int uint;


int main() {
	int num1 = 10;
	element num2 = 20;

	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
	printf("num1의 크기 : %d byte\n", sizeof(num1));
	printf("num2의 크기 : %d byte\n", sizeof(num2));

	int num3 = 3000000000;
	uint num4 = 3000000000;

	printf("num3 = %d\n", num3);
	printf("num4 = %u\n", num4);
}