#include <iostream>
int main()
{
	int a;
	int b;
	while (std::cin >> a >> b) {
		std::cout
			<< a << " + " << b << " = " << a + b << '\n'
			<< a << " - " << b << " = " << a - b << '\n'
			;
	}
}
/*
https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q14250214784
ID非公開さん

2021/9/30 5:07

2回答

プログラミングc++で
入力に5 2
8 15
出力に5 + 2 = 7
5 - 2 = 3
8 + 15 = 23
8 - 15 = -7

を表すためのプログラミングコードと何を使えばいいのかを教えて頂きたいですよろしくお願いします

プログラミング | C言語関連・11閲覧
*/
