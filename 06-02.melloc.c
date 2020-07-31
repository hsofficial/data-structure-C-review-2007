#include<stdio.h>
#include<stdlib.h>

// 정적할당 : 지역변수, 전역변수, 정적변수
// ㄴ> 컴파일시(ctrl + F5) 크기 딱 정해진다 => 실행 중에 바꿀 수 없음

// 동적할당 : 메모리 영역 중 heap에 할당되는 공간들
// ㄴ> 런타임시(실행 중) 크기 정해진다 => 실행 중에 새로운 공간 할당 제거 가능

int num2 = 20;	// 전역 변수 => 프로그램 실행시 생성, 프로그램 종료시 제거

int main() {
	int num = 10;		// main의 지역 변수 => 해당 함수가 실행시 생성, 함수가 종료시 제거

	printf("지역변수 : %d\n", num);
	printf("전역변수 : %d\n", num2);

	// 동적할당 함수 => malloc()
	int* ptr = (int*)malloc(sizeof(int));
	// int형 크기만큼 heap 영역에 동적할당하고 해당 주소를 int*로 형변환해서 반환

	printf("ptr = %p\n", ptr);

	*ptr = 100;	// ptr이 가리키는 공간 == 동적할당된 공간에 100을 대입

	printf("*ptr = %d\n", *ptr);

	// 동적할당 해제 함수 => free()

	free(ptr);

	printf("*ptr = %d\n", *ptr);
}