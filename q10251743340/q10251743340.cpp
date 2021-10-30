/*
https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q10251743340
wdb********さん

2021/10/30 12:04

1回答

C++（Vstudio2019)です。
下記のようなプログラムを作成したのですが、ビルドエラーになってしまいます。
読み直しているのですが、原因がわかりません。
分かる方いれば教えて欲しいです。
//エラーメッセージです

[警告 C26451 演算のオーバーフロー: 4 バイトの値に演算子 '+' を使用し、結果を 8 バイトの値にキャストしています。オーバーフローを避けるため、演算子 '+' を呼び出す前に値を幅の広い型にキャストしてください (io.2)。]
[警告 C26451 演算のオーバーフロー: 4 バイトの値に演算子 '+' を使用し、結果を 8 バイトの値にキャストしています。オーバーフローを避けるため、演算子 '+' を呼び出す前に値を幅の広い型にキャストしてください (io.2)。]
[警告 C6272 float でない値が引数 '2' として渡されました。'printf' への呼び出しには float が必要です。実際の型: 'int']
[エラー C2371 'AVE_MIN_MAX': 再定義されています。異なる基本型です。]
[警告 C4244 '=': 'double' から 'int' への変換です。データが失われる可能性があります。]
[警告 C4477 'printf' : 書式文字列 '%3f' には、型 'double' の引数が必要ですが、可変個引数 1 は型 'int' です]


＿＿＿＿＿＿＿＿＿＿＿＿＿
//ソースファイル１です

#include <stdio.h>
#include"6-4.h"

int main(void)
{
double ave_num;
int num1, num2, num3;

printf("整数値を3つ入力\n");
printf("整数値 1>> ");
scanf_s("%d", &num1);
printf("整数値 2>> ");
scanf_s("%d", &num2);
printf("整数値 3>> ");
scanf_s("%d", &num3);

min3(num1, num2, num3);
max3(num1, num2, num3);
ave_num = ave3(num1, num2, num3);


printf("最小値は%d です\n", MIN3);
printf("最大値は%d です\n", MAX3);
printf("平均値は%lf です\n", ave_num);
printf("最小値と最大値の平均は%3f です\n", AVE_MIN_MAX);

return 0;
}

＿＿＿＿＿＿＿＿＿＿＿＿＿
//ソースファイル２です

#include"6-4.h"
double AVE_MIN_MAX;
double ave3(int a, int b, int c) {
double ave;
ave = (double)(a + b + c) / 3;
AVE_MIN_MAX = (double)(MIN3 + MAX3) / 2;
return ave;
}

＿＿＿＿＿＿＿＿＿＿＿＿＿
//ソースファイル３です

#include"6-4.h"
int MIN3;
void min3(int a, int b, int c) {
MIN3 = a;
if (b < MIN3)MIN3 = b;
if (c < MIN3)MIN3 = c;
}

＿＿＿＿＿＿＿＿＿＿＿＿＿
//ソースファイル４です

#include"6-4.h"
int MAX3;
void max3(int a, int b, int c) {
MAX3 = a;
if (b > MAX3)MAX3 = b;
if (c > MAX3)MAX3 = c;
}

＿＿＿＿＿＿＿＿＿＿＿＿＿
//ヘッダファイルです

extern int MIN3;
extern int MAX3;
extern int AVE_MIN_MAX;

void min3(int a, int b, int c);
void max3(int a, int b, int c);
double ave3(int a, int b, int c);

C言語関連 | プログラミング・13閲覧・100
*/
