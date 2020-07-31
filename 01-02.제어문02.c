#include <stdio.h>

int main()
{
	int age;

	printf("input age : ");
	scanf_s("%d", &age);

	if (age >= 20)
	{
		printf("audlt\n");
	}

	else if (age >= 17 ) //&& = AND
	{
		printf("high school\n");
	}

	else if (age >= 14)
	{
		printf("mid school\n");
	}

	else if (age >= 8)
	{
		printf("elememt school\n");	
	}

	else
	{
		printf("child\n");
	}
	// 흐름 : (if 1) -> (if 2) -> (if 3) -> (if 4) -> (if 5) -> 다음문장

	if (age >= 20)
	{
		printf("audlt\n");
	}

	// else if : 바로 위의 조건이 거짓일때 검사하는 구문
	else if (age >= 17) //&& = AND
	{
		printf("high school\n");
	}

	else if (age >= 14)
	{
		printf("mid school\n");
	}

	else if (age >= 8)
	{
		printf("elememt school\n");
	}

	else
	{
		printf("child\n");
	}
}
