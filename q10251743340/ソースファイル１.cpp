#include <stdio.h>
#include"6-4.h"

int main(void)
{
	double ave_num;
	int num1, num2, num3;

	printf("整数値を3つ入力\n");
	printf("整数値 1>> ");
	scanf_s("%d", &num1);
	printf("整数値 2>> ");
	scanf_s("%d", &num2);
	printf("整数値 3>> ");
	scanf_s("%d", &num3);

	min3(num1, num2, num3);
	max3(num1, num2, num3);
	ave_num = ave3(num1, num2, num3);


	printf("最小値は%d です\n", MIN3);
	printf("最大値は%d です\n", MAX3);
	printf("平均値は%lf です\n", ave_num);
	printf("最小値と最大値の平均は%3f です\n", AVE_MIN_MAX);

	return 0;
}
