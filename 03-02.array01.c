#include<stdio.h>

// ���� : �����͸� �����ϴ� ����
// �迭 : ���� �ڷ������� �޸𸮻� ���ӵ� ����

int main() {
	int num = 10;		// ������ ����

	int arr[5] = { 10,20,30,40,50 };	// ������ �迭
			//      0  1  2  3  4	 index

	printf("arr[3] > %d\n\n", arr[3]);
//	printf("arr[5] : %d\n", arr[5]);
	// �迭�� ũ���� -1 ������ index�� ������

	for (size_t i = 0; i < 5; i++)
	{
		printf("arr[%d] : %d\n", i, arr[i]);
	}
	printf("\n");

	//size of array
	printf("size of arr : %d byte\n", sizeof(arr));
	printf("size of arr[0] : %d byte\n", sizeof(arr[0]));
	printf("num of arr : %d\n", sizeof(arr)/sizeof(arr[0]));
}