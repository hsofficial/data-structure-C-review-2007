#include<stdio.h>
#include<stdlib.h>


typedef struct point {
	int x;
	int y;
}Point;

int* getInt();
Point* getPoint();

int main() {
	// 1. 동적할당 구문이 길어 => 함수로 만들어두고 쓰자!
//	int* pnum = (int*)malloc(sizeof(int));

	int* pnum = getInt();
	// 1. 대입 연산자의 좌변(공간)과 우변(결과값)의 자료형은 같아야 한다 
	// 2. 함수의 전달값과 매개변수의 개수 및 자료형은 같아야 한다

	Point* pp = getPoint();

	printf("pp.x pp.y : %d %d\n", pp->x, pp->y);

	// 동적할당 후 pp 가 가리키는 공간에 10,20을 대입 후 출력
	pp->x = 10;
	pp->y = 20;

	printf("pp.x pp.y : %d %d\n",pp->x, pp->y);
	free(pnum);
	free(pp);
}

int* getInt() {	// 3. 동적할당을 하고 해당 주소를 반환 ==> 되돌려 주는 함수
	int* tmp = (int*)malloc(sizeof(int));	// 동적할당
	*tmp = 0;								// 값 0으로 초기화
	return tmp;								// 함수 호출 위치로 반환
	// 4. 함수 return 값의 자료형은 함수의 반환형과 같아야 한다
}

Point* getPoint()
{
	Point* tmpA = (Point*)malloc(sizeof(Point));	// 동적할당
	tmpA->x = 0;
	tmpA->y = 0;
	return tmpA;								// 함수 호출 위치로 반환
}
