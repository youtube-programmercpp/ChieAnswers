//n0が10(偶数)の時は ni が奇数の時コピー
//1
//0987654321
// - - - - -
//
//n0が9(奇数) の時は ni が偶数の時コピー
//987654321
// - - - - 
//
void extract(const int input[], int output[], int n)
{
	if (n > 0) {
		const int n_bit_0 = n & 1;
		do {
			if ((n & 1) ^ n_bit_0)
				*output++ = *input++;
			else
				++input;
		} while (--n);
	}
}
#include <stdlib.h>
int main()
{
	const int input[] = { 8, 5, 7, 9, 3, 6, 4, 2, 3, 1 };
	int output[_countof(input)];
	extract(input, output, _countof(input));
}
/*
４．整数値の配列 input（要素数n=10）が与えられたとき、偶数番目の要素の値のみを別の配列 output に格納する関数を作成せよ。

（関数の例）
void extract( const int input[], int output[], int n )

（要素の番号は1,2,3,...,10番目とする。0,1,2,...,9番目ではない）
*/