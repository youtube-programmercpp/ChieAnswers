#include <stdio.h>
#include"6-4.h"

int main(void)
{
	double ave_num;
	int num1, num2, num3;

	printf("�����l��3����\n");
	printf("�����l 1>> ");
	scanf_s("%d", &num1);
	printf("�����l 2>> ");
	scanf_s("%d", &num2);
	printf("�����l 3>> ");
	scanf_s("%d", &num3);

	min3(num1, num2, num3);
	max3(num1, num2, num3);
	ave_num = ave3(num1, num2, num3);


	printf("�ŏ��l��%d �ł�\n", MIN3);
	printf("�ő�l��%d �ł�\n", MAX3);
	printf("���ϒl��%lf �ł�\n", ave_num);
	printf("�ŏ��l�ƍő�l�̕��ς�%3f �ł�\n", AVE_MIN_MAX);

	return 0;
}
