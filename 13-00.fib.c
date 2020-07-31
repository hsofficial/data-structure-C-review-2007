#include<stdio.h>

int Fibo(int n) {
	if (n == 1)			return 1;
	else if (n == 2)	return 2;


	return Fibo(n - 2) + Fibo(n - 1);
}

int Fibo2(int k)
{
	int one = 1, two = 2, result = 0;  // one>> n-2, two>>n-1 �� 

	if (k == 1)			return 1;
	else if (k == 2)	return 2;
	else {
		for (int i = 3; i <= k; i++) {
			result = one + two;		// (n-1)�� (n-2) ���� ���ؼ� ������ 
			one = two;				// (n-2) = (n-1)
			two = result;			// (n-1) = (now)  
		}
	}
	return result;
}

int main() {
	int num;
	printf("�� ��° �Ǻ���ġ ��? ");
	scanf_s("%d", &num);

	// printf("%d��° �� : %d\n", num, Fibo(num));

	for (int i = 1; i <= num; i++) {
		printf("f2>%d ", Fibo2(i));
	}
	printf("\n=====================================\n");

	for (int i = 1; i <= num; i++) {
		printf("f1>%d ", Fibo(i));
	}
}