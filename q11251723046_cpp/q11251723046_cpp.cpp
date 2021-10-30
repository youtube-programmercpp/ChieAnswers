#include <iostream>
#include <stdexcept>
#include <algorithm>
template<class T>class 入力した2つの数値 {
	T a, b;
public:
	入力した2つの数値(T a, T b)
		: a(a)
		, b(b)
	{
	}
	T 大きい数値() const
	{
		return std::max(a, b);
	}
	T 小さい数値() const
	{
		return std::min(a, b);
	}
	void 順に出力(std::ostream& ostm) const
	{
		//【要件】while文を利用
		//【変更】do...while文を利用
		T 大きい数値 = b;
		const T 小さい数値 = a;
		do
			ostm << 大きい数値 << '\n';
		while (--大きい数値 >= 小さい数値);
	}
};
template<class T>auto 入力(std::istream& istm)->入力した2つの数値<T>
{
	T a, b;
	if (istm >> a >> b)
		return { a, b };
	else
		throw std::runtime_error("二数が正しく入力されませんでした。");
}
int main()
try {
	入力<int>(std::cin).大きい数値から().順に出力(std::cout);
}
catch (const std::exception& e) {
	std::cerr << e.what() << '\n';
}

/*
https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q11251723046
ID非公開さん

2021/10/29 22:20

1回答

while文を利用して、入力した2つの数値をもとに、その間に含まれる数値群を全て出力するプログラムを作成せよ。なお、出力は、大きい数値から順に出力すること。また、入力する数値の大小の順番は、規則としないこと
（1つ目には、必ず小さい数値を入力する、等を制約としない）。大学のc言語の宿題です。がどうすれば良いか分かりません。教えてください。

C言語関連 | プログラミング・12閲覧・50

共感した



ログインして回答

回答（1件）

新しい順
anarkaさん

カテゴリマスター

2021/10/30 2:20

#include <stdio.h>

//Compiler version gcc 6.3.0

int main() {
int a,b;
scanf("%d %d",&a,&b);
if (a < b) {
int tmp = a;
a = b;
b = tmp;
}
int i = a;
while (i >= b) {
printf("%d ",i);
i--;
}
printf("\n");
return 0;
}
*/
