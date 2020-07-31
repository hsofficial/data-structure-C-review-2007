#include<stdio.h>

void compare(int n1, int n2) {
	if (n1 > n2)		printf("n1 = %d가 큰 수\n", n1);
	else if (n1 < n2)	printf("n2 = %d가 큰 수\n", n2);
	else				printf("두 수는 같은 수\n");
}

int EvenOdd(int n) {
	if (n % 2 == 0)		return 1;
	else				return 0;
}

int prime(int n) {	// ex) n = 13
	for (int i = 2; i < n; i++) {
		if (n % i == 0)	return 0;
	}

	return 1;
}

int main() {
	// 문제1) 반환형이 없는 함수(void), 두 수를 입력받아 큰 수 출력하는 함수 제작
	compare(10, 20);
	compare(20, 10);
	compare(10, 10);

	// 문제2) 반환형이 있는 함수, 입력받은 수가 짝수인지 홀수인지 판별하는 함수 제작
	printf("2 ==> 짝수일 때 : %d\n", EvenOdd(2));
	printf("1 ==> 홀수일 때 : %d\n", EvenOdd(1));

	int num;
	printf("정수 입력 : ");		scanf_s("%d", &num);

	if (EvenOdd(num))			printf("%d는 짝수\n", num);
	else						printf("%d는 홀수\n", num);

	for (int i = 1; i <= 100; i++) {
		if (EvenOdd(i))			printf("%d ", i);
	}
	printf("\n");

	// 문제3) 반환형이 있는 함수, 소수를 판별하는 함수 제작
	printf("정수 입력 : ");		scanf_s("%d", &num);

	if (prime(num))				printf("%d는 소수\n", num);
	else						printf("%d는 소수아님\n", num);


	// 문제4) 3번에서 만든 함수를 이용해서, 1 ~ 입력받은 수 까지의 소수를 모두 출력
	// ※ 소수 : 1과 자기 자신만 약수로 가지는 수를 일컬음
	// ex) 8 => 1 2 4 8 (x)
	//     7 => 1 7 (o)

	for (int i = 1; i <= 100; i++) {
		if (prime(i))			printf("%d ", i);
	}
	printf("\n");
}