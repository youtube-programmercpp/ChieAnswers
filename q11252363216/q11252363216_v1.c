#include <stdio.h>
#include <ctype.h>
int main()
{
	for (;;) {
		const int 文字 = getchar();
		if (文字 == EOF)
			break;
		else if (isupper((unsigned char)文字))
			putchar(_tolower(文字));
		else if (islower((unsigned char)文字))
			putchar(_toupper(文字));
		else if (isdigit((unsigned char)文字))
			putchar('#');
		else
			putchar(文字);
	}
}
/*
C言語に関する質問。
入力した文字列を
・大文字は小文字に
・小文字は大文字に
・数字は「#」に
・それ以外はそのまま
で表示するプログラミング
toupperとtolowerを使用したものとしていないものを教えて欲しいです。
*/
