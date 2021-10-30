#include <iostream>
#include <iomanip>
struct line_header {
	int 行番号      ;
	int 行内総文字数;
	void 行頭表示(std::ostream& ostm) const
	{
		ostm << std::setw(3) << 行番号 << '[' << std::setw(3) << 行内総文字数 << "] ";
	}
};
struct node_of_char {
	const node_of_char * 前の文字      ;
	char                 入力された文字;

	void 文字表示(std::ostream& ostm, int 行番号, int 行内累計文字数) const
	{
		if (前の文字)
			前の文字->文字表示(ostm, 行番号, 行内累計文字数 + 1);
		else
			line_header{ 行番号, 行内累計文字数 }.行頭表示(ostm);
		ostm << 入力された文字;
	}
};
struct node_of_line {
	const node_of_line * 前の行        ;
	const node_of_char * 行末の文字    ;

	int 行表示(std::ostream& ostm) const
	{
		const auto 行番号 = 前の行 ? 前の行->行表示(ostm) : 1;
		if (行末の文字)
			行末の文字->文字表示(ostm, 行番号, 1);
		else
			line_header{ 行番号 }.行頭表示(ostm);
		ostm << '\n';
		return 行番号 + 1;
	}
	void 入力と表示(std::istream& istm, std::ostream& ostm)
	{
		char ch;
		if (istm.get(ch)) {
			if (ch == '\n')
				node_of_line{ this }.入力と表示(istm, ostm);
			else {
				const node_of_char prev{ 行末の文字, ch };
				行末の文字 = &prev;
				入力と表示(istm, ostm);
			}
		}
		else if (行末の文字)
			行表示(ostm);
		else if (前の行)
			前の行->行表示(ostm);
	}
};
int main()
{
	node_of_line{}.入力と表示(std::cin, std::cout);
}
/*
https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q13251721288
yos********さん

2021/10/29 21:47

1回答

c言語の宿題で以下の課題が出ました。
「標準入力」欄に英文（英数字の文字列）を入力すると，入力した英文の各行に，1から始まる行番号とその行の文字数を付加して「標準出力」に表示するプログラムを作成してください． 各行の表示は，以下に従ってください：
行番号は，行の先頭から3桁の右詰めで表示すること．
行の文字数は，3桁の行番号に続けて「[」を表示し，そのあとに文字数を3桁の右詰めで表示し，そのあとに「]」を表示すること．
行の文字数のあとに半角の空白1文字を表示し，そのあとに入力した行の内容を表示すること．
作成したプログラムを実行した際，以下の実行例のように，「標準入力」欄に入力したデータに対して「標準出力」に結果が表示されるようにしてください， なお，下記の表示において，↵ は，ここで改行を行っていることを明示しています． 入力の際に，この文字を記述する必要はありません：



【実行例1】
「標準入力」
tokyo online university↵
c programming↵
「標準出力」
1[ 23] tokyo online university↵
2[ 13] c programming↵
【実行例2】
「標準入力」
Once upon a time, ↵
there lived a man ↵
whose name was ↵
Rip van Winkle.↵
「標準出力」
1[ 18] Once upon a time, ↵
2[ 18] there lived a man ↵
3[ 15] whose name was ↵
4[ 15] Rip van Winkle.↵

わからないので、ソースコード、実行結果を添えてお願い致します。
Ⅽ言語が好きな方、誰でもいいのでお願いします。

C言語関連 | プログラミング・24閲覧

共感した



ログインして回答

回答（1件）

新しい順
なぽれおんのきりふださん

2021/10/30 5:58

出力は

入力
出力
入力
出力

ではなく、

実行例のように

入力
入力
入力

出力
出力
出力

とするのかな？

その場合、入力の最大行数は如何ほどを想定しているのだろう？
*/
