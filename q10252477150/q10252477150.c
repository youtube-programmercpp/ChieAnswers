void extract(const int input[], int output[], int n)
{
	int i = 0;
	int j = 0;
	for (;;) {
		if (i < n) {
			//x番目
			const int x = i + 1;
			if (x % 2 == 0) {
				output[j] = input[i];
				++j;//次のための準備
			}
			++i;
		}
		else
			break;
	}
}
#include <stdlib.h>
int main()
{
	const int input[] = { 8, 5, 7, 9, 3, 6, 4, 2, 3, 1 };
	int output[10];
	extract(input, output, _countof(input));
}
/*
４．整数値の配列 input（要素数n=10）が与えられたとき、偶数番目の要素の値のみを別の配列 output に格納する関数を作成せよ。

（関数の例）
void extract( const int input[], int output[], int n )

（要素の番号は1,2,3,...,10番目とする。0,1,2,...,9番目ではない）
*/