#include<stdio.h>

int Fibo(int n) {
	if (n == 1)			return 1;
	else if (n == 2)	return 2;


	return Fibo(n - 2) + Fibo(n - 1);
}

int Fibo2(int k)
{
	int one = 1, two = 2, result = 0;  // one>> n-2, two>>n-1 값 

	if (k == 1)			return 1;
	else if (k == 2)	return 2;
	else {
		for (int i = 3; i <= k; i++) {
			result = one + two;		// (n-1)과 (n-2) 값을 더해서 돌려줌 
			one = two;				// (n-2) = (n-1)
			two = result;			// (n-1) = (now)  
		}
	}
	return result;
}

int main() {
	int num;
	printf("몇 번째 피보나치 수? ");
	scanf_s("%d", &num);

	// printf("%d번째 수 : %d\n", num, Fibo(num));

	for (int i = 1; i <= num; i++) {
		printf("f2>%d ", Fibo2(i));
	}
	printf("\n=====================================\n");

	for (int i = 1; i <= num; i++) {
		printf("f1>%d ", Fibo(i));
	}
}