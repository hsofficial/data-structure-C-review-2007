#include<stdio.h>
#include<stdlib.h>

int main() {
	int* ptr = (int*)malloc(sizeof(int));
	*ptr = 10;

	printf("*ptr = %d\n", *ptr);

	free(ptr);

	printf("ptr = %p\n", ptr);
	printf("*ptr = %d\n", *ptr);	// �����Ⱚ
	// free �� ptr�� ����Ű�� ������ �ǹ̰� �����Ƿ� ������ ptr�� 0(NULL)�� �ʱ�ȭ

	ptr = NULL;
	printf("ptr = %p\n", ptr);
}