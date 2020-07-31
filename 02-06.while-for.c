#include<stdio.h>

// while : 불특정 횟수 반복에 많이 사용
// for : 특정 횟수 반복에 많이 사용

// while < - > for  :  서로 서로 구현 가능

int main() {
	// 1.특정 횟수 반복

	int num = 1, i;

	// while(조건식) : 조건식이 참이면 종속문장 수행, 거짓이면 반복 종료
	while (num <= 5) {
		printf("%d > Hello world!!!\n", num);
		num++;	//증감식
	}

	printf("%d > 반복종료\n\n", num);

	// (초기값; 조건식; 증감식)
	for (i = 1; i < 5; i++)
	{
		printf("%d > Hello world!!!\n", i);
	}
	printf("%d > 반복종료\n\n", i);
}