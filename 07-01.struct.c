#include<stdio.h>

// 1. 구조체 정의 후 
struct people {
	char name[20];
	int age;
};

// 재정의
typedef struct people People;


// 2. 구조체 정의 하면서 재정의
typedef struct point {
	int x;
	int y;
}Point2D;


int main() {
	struct people p1 = { "홍길동", 15 };
	People p2 = { "김길동", 17 };

	printf("p1) 이름 : %s, 나이 : %d\n", p1.name, p1.age);
	printf("p2) 이름 : %s, 나이 : %d\n", p2.name, p2.age);

	Point2D po1 = { 1,2 };
	Point2D po2 = { 3,10 };

	printf("po1의 좌표 ( %d,%d )\n", po1.x, po1.y);
	printf("po2의 좌표 ( %d,%d )\n", po2.x, po2.y);
}