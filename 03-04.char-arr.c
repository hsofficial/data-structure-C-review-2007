#include<stdio.h>
// C���� ���ڿ� ó���� ���� �ڷ����� ���� ����
// ����, ���Ϲ��ڸ� �����ϴ� char�� �迭�� ���·� ���ڿ��� ó��

int main() {
	char word[10] = "CLangunge";
	char word2[10] = { 'C', 'l', 'a', 'n', 'g', 'u', 'a', 'g', 'e' };
	//  0    1    2    3    4    5    6    7    8    9(= NULL)
	printf("word1 = %s\n", word);
	printf("word2 = %s\n\n", word2);

	// �迭�� ����Ǳ� ������ index ��밡��
	printf("g = %c\n\n", word[4]);

	for (size_t i = 0; i < 10; i++)
	{
		printf("%c", word[i]);
	}

	// �Է¹޾� ���
	char word3[10];
	int num;

	printf("�ܾ� �Է� : ");
	//	scanf("%s", word3);
	scanf_s("%s", word3, sizeof(word3)); //ũ�� �ۼ� �ʿ� ~ ������ ��������

	printf("���� �Է� : ");
	//	scanf("%d", &num);
	scanf_s("%d", &num);

	printf("word3 = %s, num = %d\n", word3, num);


}