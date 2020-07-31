#include<stdio.h>

int main() {
	int arr[5] = { 10,20,30,40,50 };

	printf("arr[0] = %d\n", arr[0]);

	printf("arr = %p\n", arr);		// 배열의 이름은 배열의 '시작 주소'를 의미
	printf("arr + 1 = %p\n", arr + 1);
	printf("arr + 2 = %p\n", arr + 2);

	// ※ 16진수 : 0 1 2 3 4 5 6 7 8 9 A  B  C  D  E  F
	//								  10 11 12 13 14 15

	printf("*arr = %d\n", *arr);
	printf("*arr = %d\n", *arr + 1);
	printf("*arr = %d\n", *(arr + 1));

	// 주소를 이용해서 배열 전체 출력
	for (size_t i = 0; i < 5; i++)
	{
		printf("*arr[%d] = %d\n", i, *(arr + i));
	}

}