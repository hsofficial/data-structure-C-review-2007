#include<stdio.h>

int main() {

	for (size_t i = 0; i < 5; i++)		//행반복
	{
		for (size_t j = 0; j < 5; j++) {	//열반복
			printf("*");
		}
		printf("\n");
	}

	//구구단

	for (size_t x = 1; x < 10; x++)
	{
		for (size_t y = 1; y < 10; y++)
		{
			printf("%d * %d = %d\n",x, y, x * y);
		}
		printf("\n");
	}
	printf("\n=============================\n");

	//*
	int num1;

	//1234삼각형
	printf("line of stars : ");
	scanf_s("%d", &num1);

	for (int i = 0; i < num1 + 1; i++) { // 행(가로줄)의 수
		for (int j = 0; j < i + 1; j++) { // 열(세로줄)의 수
			printf("*");
		}
		printf("\n");
	}
	printf("\n=============================\n");

	printf("line of stars : ");
	scanf_s("%d", &num1);

	//1234우정렬
	for (int i = 0; i < num1 + 1; i++) { // 행(가로줄)의 수
		for (int j = 0; j < num1 - i; j++)
		{
			printf(" ");	//열 공백
		}
		for (int j = 0; j <= i; j++) 
		{
			printf("*");	//열 *
		}
		printf("\n");
	}
	printf("\n=============================\n");

	//135정삼각
	printf("line of stars : ");
	scanf_s("%d", &num1);

	for (int i = 0; i < num1 + 1; i++) { // 행(가로줄)의 수
		for (int j = 0; j < num1 - i; j++)
		{
			printf(" ");	//열 공백
		}
		for (int j = 0; j <= i * 2; j++)
		{
			printf("*");	//열 *
			
		}
		printf("\n");
	}
	printf("\n=============================\n");

	//321삼각형
	printf("line of stars : ");
	scanf_s("%d", &num1);

	for (int i = 0; i < num1 + 1; i++) { // 행(가로줄)의 수
		for (int j = 0; j < num1 - i; j++)
		{
			printf("*");	//열 *
		}
		printf("\n");
	}
	printf("\n=============================\n");
}