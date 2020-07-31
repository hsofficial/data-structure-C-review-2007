#include<stdio.h>

int main() {
	int num1 = 10, num2 = 20;

	printf("num1 = %d, num2 = %d\n", num1, num2);

	// num1에 저장된 값과 num2에 저장된 값을 교체
	int tmp_save = 0;
	
	tmp_save = num1 ;
	num1 = num2;
	num2 = tmp_save;

	printf("num1 = %d, num2 = %d\n", num1, num2);
}