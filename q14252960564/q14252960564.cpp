#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 3
int d[N];
double a(void);

int main(void)
{
	extern int d[];
	int i;

	for (i = 0; i < N; i++) {
		printf("d[%d]", i);
		scanf("%d", &d[i]);
	}
	printf("%f\n", a());
	return 0;
}

double a(void)
{
	extern int d[];
	int i;
	double sum = 0.0;
	for (i = 0; i < N; i++)
		sum += d[i];
	return sum;
}
/*
https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q14252960564
1150294515さん

2021/11/24 7:20

合計を求めたいのですが。
#include <studio.h>
#define N 3
int t[N];
double a(void);

int main(void)
{
extern int d[];
int I;

for(i=0;i<N;i++){
printf(”d[%d]”,i);
scanf(”%d”,&d[i]);
}
return 0;
}

int a(void)
{
extern int d[];
int d;
double sum=0.0;
for(i=0;i<N;i++)
sum+=d[i];
return 0;
}

これだとうまくいきません。
どうしたらいいですか？
教えてください。
*/
