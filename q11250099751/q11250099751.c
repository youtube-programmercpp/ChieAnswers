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
そーめんさん
2021/9/27 23:37

C言語について質問です。
文字型で小文字を取り除くプログラムを作りたいです。教えてください。

char s[] = "AbchrBefpxyCfg";
*/
