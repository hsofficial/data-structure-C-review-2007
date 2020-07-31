#include<stdio.h>
#define MAX 5

int main() {
	int arr[MAX];	//empty array
	arr[0] = 10;

	printf("arr[0] : %d\n\n", arr[0]);

	for (int i = 0; i < MAX; i++)
	{
		arr[i] = (i + 1) * 10;
	}

	for (int j = 0; j < MAX; j++)
	{
		printf("arr[%d] : %d\n", j, arr[j]);
	}
}