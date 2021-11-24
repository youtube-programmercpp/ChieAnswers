#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define	N	10 //最大入力データ個数
int main()
{
	int 入力値[N];
	int カウント[N];
	if (scanf("%d", &入力値[0]) == 1) {
		カウント[0] = 1;
		int n = 1/*入力済み一意データ個数*/;
		while (n < N) {
			if (scanf(",%d", &入力値[n]) == 1) {
				//照合
				for (int i = 0; ; ) {
					if (入力値[i] == 入力値[n]) {
						++カウント[i];
						break;
					}
					else if (++i < n)
						continue;
					else {
						カウント[n++] = 1;
						break;
					}
				}
			}
			else
				break;
		}
		for (int i = 0; i < n; ++i)
			printf("%dを%d回入力しました。\n", 入力値[i], カウント[i]);
	}
}
/*
https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q14252932594
rin********さん

2021/11/23 17:52

C言語で同じ数字をカウントするプログラムを教えて欲しいです。例えば、
22,33,44,33,22,33,44,55
と入力すれば
22を2回入力しました。
33を3回入力しました。
44を2回入力しました。
55を1回入力しました。

というふうにしたいです。
まだ初心者なので使う変数？限られてるので授業で習ったのは以下のものです。
for,while,tmp(入れ替え),if,flag,printf,scanf,&&,||,<,>,<=,>=,!=sum,i,j,
少し難しくても参考になると思うので回答よろしくお願いします。
*/
