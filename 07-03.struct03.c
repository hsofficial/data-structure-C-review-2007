#include<stdio.h>

typedef struct point {
	int x, y;
}Point2D;

void print2D(Point2D po) {	// 함수의 전달값과 매개변수의 자료형 및 개수는 같아야 한다
	printf("좌표) %d,%d\n", po.x, po.y);
}

void myswap(Point2D* p1, Point2D* p2) {
	Point2D tmp;

	tmp = * p1;
	* p1 = * p2;
	* p2 = tmp;

}

int main() {
	// 3. 함수
	Point2D p1 = { 1,2 };

	// 함수 없이 출력
	printf("p1) %d,%d\n", p1.x, p1.y);

	// 함수로 출력
	print2D(p1);	// 전달값 : p1 => p1의 자료형은 Point2D

	Point2D p2;
	p2 = p1;			// 기본적으로 구조체 변수는 같은 자료형끼리 대입연산으로 복사 가능

	print2D(p2);

	Point2D p3 = { 30,40 };
	print2D(p3);

	// 구조체 변수 p1과 p3의 데이터를 교체하는 swap함수를 구현
	printf("p1의 ");		print2D(p1);
	printf("p3의 ");		print2D(p3);

	myswap(&p1, &p3);
	// 주소를 전달 => 매개변수의 참조 단계가 늘어난다

	printf("p1의 ");		print2D(p1);
	printf("p3의 ");		print2D(p3);

}
