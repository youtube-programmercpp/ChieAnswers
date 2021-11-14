#include <stdio.h>
int main()
{
	for (;;) {
		const int 文字 = getchar();
		if (文字 == EOF)
			break;
		else if ('A' <= 文字 && 文字 <= 'Z')
			putchar(文字 + ('a' - 'A'));
		else if ('a' <= 文字 && 文字 <= 'z')
			putchar(文字 - ('a' - 'A'));
		else if ('0' <= 文字 && 文字 <= '9')
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
