#include <stdio.h>

// ��� : ���ǽĿ� ���� �ڵ��� �帧�� �����ϴ� ����
// 1. ���ǹ�(= �б⹮) : ���ǽĿ� ���� �ڵ带 �帧�� �б�
//	  ��> if, else ~ if, else, switch ~ case
// 2. �ݸ�(= ������) : ���ǽĿ� ���� �ڵ带 �ݺ�
//    ��> while, do ~ while, for
// 3. ���� ���
//    ��> break, continue

int main() 
{
	int age;

	printf("input age : ");
	scanf_s("%d",&age);
	//scanf ���ȹ��� > ������ �ȵ�
	//SDL ���� Ȥ�� _s()���

	printf("\n�Է¹��� ���� : %d\n\n", age);

	// if : T/F �Ǻ� > T ���ӽ��� F �����ϰ� ��������
	// else : �ٷ� ���� if���� �ѽ��̵Ǹ�, if���� ������ �����϶� ����Ǵ� ����

	printf("if_else>You are ");

	if (age >= 20)
	{
		printf("audlt\n\n");	//if����
	}
	else
	{
		printf("under 19\n\n"); //else����
	}
	// �帧 : (if ~ else) -> ��������
	

	printf("if_if>You are ");

	if (age >= 20) 
	{
		printf("audlt\n\n");		// 1�� if ���ӹ���
	}

	if (age < 20) 
	{
		printf("under 19\n\n");		// 2�� if ���ӹ���
	}
	// �帧 : (if 1) -> (if 2) -> ��������


}