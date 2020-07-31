#include<stdio.h>

// swtich¹®Àº if¹®º¸´Ù ÈÎ¾À Á¦ÇÑÀû
// if¹® -> switch¹® (o)
// switch¹® -> if¹® (¹Ì¹¦)

int main() {
	int menu;

	printf("========== ¸Ş´º ==========\n");
	printf("\t1. Â¥Àå¸é\n");
	printf("\t2. Â«»Í\n");
	printf("\t3. ÅÁ¼öÀ°\n");
	printf("\t4. ººÀ½¹ä\n");
	printf("\t>>> ");
	scanf_s("%d", &menu);
	printf("==========================\n");

	switch (menu)
	{
	case 1:
		printf("Â¥Àå¸é ÁÖ¹®~\n");
		break;
	case 2:
		printf("Â«»Í ÁÖ¹®~\n");
		break;
	case 3:
		printf("ÅÁ¼öÀ° ÁÖ¹®~\n");
		break;
	case 4:
		printf("ººÀ½¹ä ÁÖ¹®~\n");
		break;
	default:
		printf("wrong menu\n");
		break;
	}
}