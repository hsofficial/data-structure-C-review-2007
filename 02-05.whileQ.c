#include <stdio.h>

void main() {

	//Q1
	int num;

	printf("plz input number : ");
	scanf_s("%d", &num);

	while (num)
	{
		printf("%d", num % 10);
		num = num / 10;
	}
	printf("\n=============================\n");

	//q2 : 십진~이진
	int bin, sum = 0, i = 1;

	printf("plz input number(0-9 number system) : ");
	scanf_s("%d", &num);

	printf("zero/one system number : ");
	while (num > 0)
	{
		bin = num % 2;	//2 나누기해서 나머지는 bin
		sum += bin * i;	//sum에 bin * 자리수(i ~ 10 100 1000순으로 증가)
		num = num / 2;	//2 나누기 실시
		i = i * 10;		//규칙에 맞게 자리수 곱하기 실시
	}
	printf("%d", sum);
	printf("\n=============================\n");

	//Q3 수 뒤집어서 저장
	int res01 = 0;

	printf("plz input number : ");
	scanf_s("%d", &num);

	while (num != 0) {
		res01 = res01 * 10 + num % 10;
		num /= 10;
	}

	printf("res01 + 100 = %d\n", res01 + 100);

	/*
	원리
	입력 : 123, result = 0

	1회차 : result = 0 * 10 + 123 % 10 = 3
	2회차 : result = 3 * 10 + 12 % 10 = 32
	3회차 : result = 32 * 10 + 1 % 10 = 321
	num = 0 ( 반복 종료 )

	*/
}