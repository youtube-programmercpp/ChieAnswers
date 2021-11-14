#include <stdio.h>
int main()
{
	const char* s = "AB CDE FG";
	for (;;) {
		if (*s == '\0'/*Null文字*/)
			break;
		else if (*s == ' ')
			putchar('\n');
		else
			putchar(*s);
		++s;
	}
}
/*
ID非公開さん

2021/11/12 9:55

2回答

C言語について質問です
char *s=“AB CDE FG”
として
半角のスペースごとに改行して表示させたいです
配列は使わずにです。
if文で*s==‘ ’として改行させたりとやってみたのですがうまくいきません
良ければやり方を教えてください
*/