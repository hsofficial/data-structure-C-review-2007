#include<stdio.h>

// 변수 : 데이터를 저장하는 공간
// 포인터 변수 : 변수나 상수의 주소를 저장하는 공간
// 이중 포인터 : 포인터 변수의 주소를 저장하는 공간

int main() {
	int num = 10;		// 정수 공간 num에 10을 저장

	int* pnum = &num;	// 포언터 변수에 num의 주소를 저장

	printf("num = %d\n", num);
	printf("num의 주소 = %p\n", &num);
	printf("pnum = %p\n", pnum);
	printf("num의 주소 안의 공간 = %d\n", *&num);
	printf("pnum이 가리키는 주소 안의 공간 = %d\n\n", *pnum);

	int** ppnum = &pnum;	// 포인터 변수에 pnum의 주소를 저장
							// ㄴ> 이중 포인터에 포인터 변수의 주소를 저장

	// ppnum -> pnum
	// pnum -> num
	// num = 10

	// ppnum -> pnum -> num(10)

	printf("ppnum = %p\n", ppnum);
	printf("pnum의 주소 = %p\n", &pnum);
	printf("ppnum이 가리키는 주소 안의 공간 = %p\n", *ppnum);
	printf("pnum = %p\n", pnum);	// num의 주소
	printf("pnum이 가리키는 주소 안의 공간 = %d\n", *pnum);
	printf("num = %d\n", num);
	printf("ppnum이 두 번 참조하면? %d\n", **ppnum);

	// *(*ppnum) => *(pnum) => num
}