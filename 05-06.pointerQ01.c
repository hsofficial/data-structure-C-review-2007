#include<stdio.h>

void total(int n, int* s) {
	for (int i = 1; i <= n; i++) {
		*s += i;
	}
}

int main() {
	int num, sum = 0;

	printf("정수 입력 : ");
	scanf_s("%d", &num);

	// 문제) 반환형이 없는(void) 형식의 함수로 1 ~ num까지의 합계를
	// main 함수에서 출력

	total(num, &sum);
	// num은 total에서 바뀔 필요가 없음 ==> 값을 전달하는 것이 안전
	// sum은 total에서 바뀔 필요가 있음 ==> 주소를 전달해야 값을 변경 가능

	printf("합계 : %d\n", sum);
}

