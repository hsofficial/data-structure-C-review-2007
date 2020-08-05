#include<stdio.h>
#include<stdlib.h>

int main() {
	int* ptr = (int*)malloc(sizeof(int));
	*ptr = 10;

	printf("*ptr = %d\n", *ptr);

	free(ptr);

	printf("ptr = %p\n", ptr);
	printf("*ptr = %d\n", *ptr);	// 쓰레기값
	// free 후 ptr이 가리키는 공간은 의미가 없으므로 제거후 ptr을 0(NULL)로 초기화

	ptr = NULL;
	printf("ptr = %p\n", ptr);
}