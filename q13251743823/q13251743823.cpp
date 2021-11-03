/*
https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q13251743823
sum********さん

2021/10/30 12:17

0回答

標準入力から複数行 (EOFで終了) の文字列を読み込み, まず 0, 2, 4, 6, … 行目を, 続いて 1, 3, 5, 7,
… 行目を標準出力に出力するプログラム linedeshuffle.c を作成せよ. ただし, 先頭行を 0 行目とする.行の読み込みには fgets を用いよ. 使用例として, 標準入力から複数行 (EOFで終了) の文字列を読み込みんで, それをそのまま標準出力に出力するプログラムを次に示す.
この課題のプログラムを教えていただけないでしょうか。
c言語でプログラムを作成しています。
よろしくお願いします。

C言語関連 | プログラミング・7閲覧・25

1人が共感しています
*/
#include <stdio.h>
#include <string.h>
struct chars {
	struct chars* prev;
	char s[16];

};
struct line {
	struct line* prev;
};

void f(int line_index)
{
	char buf[16];
	if (fgets(buf, sizeof buf, stdin)) {
		if (buf[strlen(buf) - 1] == '\n')
			f(line_index + 1);
		else {
			f(line_index);
		}
		
	}
}

int main()
{
}
