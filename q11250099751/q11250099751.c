#include <ctype.h>
int main()
{
	char s[] = "AbchrBefpxyCfg";
	const char *a = s;
	char *b = s;
	for (;;) {
		if (islower((unsigned char)*a))
			++a;
		else if ((*b++ = *a++) == '\0')
			break;
	}
}
/*
https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q11250099751
���[�߂񂳂�
2021/9/27 23:37

C����ɂ��Ď���ł��B
�����^�ŏ���������菜���v���O��������肽���ł��B�����Ă��������B

char s[] = "AbchrBefpxyCfg";
*/
