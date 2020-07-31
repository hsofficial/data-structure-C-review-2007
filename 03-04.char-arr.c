#include<stdio.h>
// C언어는 문자열 처리를 위한 자료형이 따로 없음
// 따라서, 단일문자를 저장하는 char의 배열의 형태로 문자열을 처리

int main() {
	char word[10] = "CLangunge";
	char word2[10] = { 'C', 'l', 'a', 'n', 'g', 'u', 'a', 'g', 'e' };
	//  0    1    2    3    4    5    6    7    8    9(= NULL)
	printf("word1 = %s\n", word);
	printf("word2 = %s\n\n", word2);

	// 배열로 저장되기 때문에 index 사용가능
	printf("g = %c\n\n", word[4]);

	for (size_t i = 0; i < 10; i++)
	{
		printf("%c", word[i]);
	}

	// 입력받아 사용
	char word3[10];
	int num;

	printf("단어 입력 : ");
	//	scanf("%s", word3);
	scanf_s("%s", word3, sizeof(word3)); //크기 작성 필요 ~ 정수는 생략가능

	printf("정수 입력 : ");
	//	scanf("%d", &num);
	scanf_s("%d", &num);

	printf("word3 = %s, num = %d\n", word3, num);


}