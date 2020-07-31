#include<stdio.h>

int main() {
	int arr[5];

	//input
	for (int i = 0; i < 5; i++)
	{
		printf("input arr[%d] : ", i);
		scanf_s("%d", &arr[i]);
	}
	printf("=============================\n");

	//output
	for (int j = 0; j < 5; j++)
	{
		printf("arr[%d] : %d\n", j, arr[j]);
	}
	printf("=============================\n");

	//save maximum number
	int maxnum = arr[0];

	for (int x = 0; x < 5; x++)
	{
		if (arr[x] > maxnum)
		{
			maxnum = arr[x];
		}
		if (arr[x+1] > maxnum)
		{
			maxnum = arr[x+1];
		}
	}

	printf("maxinum num of arr : %d\n", maxnum);
	printf("=============================\n");

	//output sum of arrnum
	int s_num = 0;

	for (int k = 0; k < 5; k++)
	{
		s_num += arr[k];
	}
	printf("sum of arr : %d\n", s_num);
	printf("=============================\n");
}