#include<stdio.h>
#include<string.h>	// 문자열 복사, 길이, 비교 함수가 있음

// 변수 : 데이터를 저장하는 공간
// 배열 : 같은 자료형으로 메모리상 연속된 공간
// 구조체 : 여러 자료형을 묶어서 새로운 자료형으로 정의 (= 사용자 정의 자료형)

// 구조체 형식 ==> struct 구조체명 { 자료형 변수들; };
struct people {
	char name[20];
	int age;
	double height;
	// 구조체 안에 있는 변수(= 멤버변수)
};

int main() {
	// 구조체를 사용하지 않은 형식
	char name[20] = "홍길동";
	int age = 20;
	double height = 175.2;

	printf("이름 : %s, 나이 : %d, 키 : %.1lf\n", name, age, height);

	// 한명의 사람의 데이터를 더 저장하려면 위의 변수 개수만큼 또 필요 ==> 코드 중복
	struct people p1 = { "홍길동", 20, 175.2 };
	struct people p2 = { "이지금", 23, 175.1 };

	printf("이름 : %s, 나이 : %d, 키 : %.1lf\n", p1.name, p1.age, p1.height);
	printf("이름 : %s, 나이 : %d, 키 : %.1lf\n", p2.name, p2.age, p2.height);

	struct people p3;	// 문자 배열은 대입연산 불가능
	strcpy(p3.name, "이지은");	// 뒤의 문자열을 앞으로 복사

	p3.age = 28;
	p3.height = 165.5;

	printf("이름 : %s, 나이 : %d, 키 : %.1lf\n", p3.name, p3.age, p3.height);
}