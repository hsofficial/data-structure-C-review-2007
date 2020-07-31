#include<stdio.h>

// 구조체 : 사용자 정의 '자료형'

// 따라서, 자료형이므로 배열, 포인터, 함수의 매개변수 및 반환형, 동적할당으로 사용가능

typedef struct point {
	int x, y;
}Point2D;

int main() {
	// 1. 배열
	int arr[3] = { 10,20,30 };

	Point2D pmember[3] = { {1,2}, {2,3}, {3,4} };

	printf("Point2D 자료형의 크기 : %d byte\n", sizeof(Point2D));

	for (size_t i = 0; i < 3; i++)
	{
		printf("pmember[%d] = ( %d,%d )\n", i, pmember[i].x, pmember[i].y);
	}

	pmember[2].y = 5;

	for (size_t i = 0; i < 3; i++)
	{
		printf("pmember[%d] = ( %d,%d )\n", i, pmember[i].x, pmember[i].y);
	}

	for (size_t i = 0; i < 3; i++)
	{
		printf("int[%d] = ( %d )\n", i, arr[i]);
	}

	// 2. 포인터 => 선언방법 => 자료형 뒤에 * 를 붙이면 포인터 변수
	// 기본적으로 포인터 변수의 자료형은 저장할 변수의 자료형과 똑같이 맞춘다
	int num = 10;
	int* pnum = &num;		// num의 주소 => int형 => int* pnum에 저장

	Point2D p1 = { 10,20 };
	Point2D* pp1 = &p1;		// p1의 주소 => Point2D => Point2D* pp1에 저장

	printf("pnum이 가리키는 주소 안의 값 : %d\n", *pnum);
	printf("pp1이 가리키는 주소 안의 값 : ( %d,%d )\n", pp1->x, pp1->y);
	// 구조체 포인터, 즉 주소로 멤버변수 접근시 -> (arrow) 연산자를 사용한다
	printf("pp1이 가리키는 주소 안의 값 : ( %d,%d )\n", (*pp1).x, (*pp1).y);

}