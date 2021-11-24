#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {

	char gengo[][7] = { "Meiji","Taisyo","Syouwa","Heisei" };
	char buf[80], * p, q;
	int i, j;

	printf("%s\n", gengo[2]);
	printf("%c\n", gengo[1][3]);

	p = gengo[0];
	printf("%s\n", p + 3);

	q = *(p + 1);
	q++;
	printf("%c\n", q);

	j = 0;
	for (i = 1; i < 4; i++) {
		p = gengo[i];
		while (*p != '\0') {
			if (isxdigit(*p)) {
				buf[j] = *p;
				j++;
			}
			p++;
		}
	}
	buf[j] = '\0';
	printf("%s\n", buf);

	return 0;
}
/*
https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q14252844659
qgp********さん

2021/11/21 20:46

C言語についてわからないところがあります。
この行の結果です。

>q=*(p+1);
>q++;
>printf("%c\n",q);
q=*(p+1);であれば"Taisyo"のq++で小文字のaと考えてしまいます。
実際の回答は"Meiji"のeがインクリメントでfになります。
これはなんでこうなるか考えてもわかりません。

------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>

int main(void){

char gengo[][7]={"Meiji","Taisyo","Syouwa","Heisei"};
char buf[80],*p,q;
int i,j;

printf("%s\n",gengo[2]);
printf("%s\n",gengo[1][3]);

p=gengo[0];
printf("%s\n",p+3);

q=*(p+1);
q++;
printf("%c\n",q);

j=0;
for(i=1;i<4;i++){
p=gengo[i];
while(*p!='\0'){
if(isxdigit(*p)){
buf[j]=*p;
j++;
}
p++;
}
}
buf[j]='\0';
printf("%s\n",buf);

return 0;
}

もう一つは、配列の加算で例えば gengo+1や とポインタの加算でp+1とp++の動きがこんがらがってしまいがちです。
宣言時の*で意味合いが違うのか考えたりしましたがわかりません。そこは気にする必要はないのかもわかりません。

どうかご教授をお願いします。
*/
