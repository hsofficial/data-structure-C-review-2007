#include <stdio.h>

// 제어문 : 조건식에 따라 코드의 흐름을 제어하는 구문
// 1. 조건문(= 분기문) : 조건식에 따라 코드를 흐름을 분기
//	  ㄴ> if, else ~ if, else, switch ~ case
// 2. 반목문(= 루프문) : 조건식에 따라 코드를 반복
//    ㄴ> while, do ~ while, for
// 3. 보조 제어문
//    ㄴ> break, continue

int main() 
{
	int age;

	printf("input age : ");
	scanf_s("%d",&age);
	//scanf 보안문제 > 컴파일 안됨
	//SDL 해제 혹은 _s()사용

	printf("\n입력받은 나이 : %d\n\n", age);

	// if : T/F 판별 > T 종속시행 F 무시하고 다음으로
	// else : 바로 위의 if문과 한쌍이되며, if문의 조건이 거짓일때 실행되는 구문

	printf("if_else>You are ");

	if (age >= 20)
	{
		printf("audlt\n\n");	//if종속
	}
	else
	{
		printf("under 19\n\n"); //else종속
	}
	// 흐름 : (if ~ else) -> 다음문장
	

	printf("if_if>You are ");

	if (age >= 20) 
	{
		printf("audlt\n\n");		// 1번 if 종속문장
	}

	if (age < 20) 
	{
		printf("under 19\n\n");		// 2번 if 종속문장
	}
	// 흐름 : (if 1) -> (if 2) -> 다음문장


}