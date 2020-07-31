#include<stdio.h>

// 변수 : 데이터를 저장하는 공간
// 배열 : 같은 자료형으로 메모리상 연속된 공간

int main() {
	int num = 10;		// 정수형 변수

	int arr[5] = { 10,20,30,40,50 };	// 정수형 배열
			//      0  1  2  3  4	 index

	printf("arr[3] > %d\n\n", arr[3]);
//	printf("arr[5] : %d\n", arr[5]);
	// 배열은 크기의 -1 까지의 index를 가진다

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