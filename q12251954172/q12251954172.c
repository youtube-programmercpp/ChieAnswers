#include <stdio.h>
#include <stdlib.h>
struct string {
	size_t length;
	char data[1];
};
struct string* string_new(size_t length)
{
	struct string* const p = malloc(offsetof(struct string, data[length + 1]));
	if (p) {
		p->data[p->length = length] = '\0';
		return p;
	}
	else
		return NULL;
}
struct string* string_assign_char(struct string* s, size_t i, int ch)
{
	if (s) {
		s->data[i] = ch;
		return s;
	}
	else
		return NULL;
}
struct string* input(FILE* fp, size_t i)
{
	const int ch = fgetc(fp);
	switch (ch) {
	case EOF:
	case '\n':
		return string_new(i);
	default:
		return string_assign_char(input(fp, i + 1), i, ch);
	}
}
struct string* string_make_reverse(struct string* a)
{
	if (a) {
		struct string* const b = string_new(a->length);
		if (b) {
			if (a->length) {
				for (size_t i = 0, j = a->length;;) {
					b->data[--j] = a->data[i];
					if (j)
						++i;
					else
						break;
				}
			}
			return b;
		}
		else
			return NULL;
	}
	else
		return NULL;
}
int main()
{
	struct string* const a = input(stdin, 0);
	//キーボードから入力した文字列aの内容を文字列bに逆順にコピー
	struct string* const b = string_make_reverse(a);
	free(b);
	free(a);
}
/*
https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q12251954172
1149861592さん

2021/11/3 16:01

0回答

c言語初心者です。
キーボードから入力した文字列aの内容を文字列bに逆順にコピーするやり方を教えてください。

例 ABCD → DCBA

C言語関連 | プログラミング・5閲覧
*/
