void intary_rcpy(int v1[], const int v2[], int n)
{
	int i = 0;
	while (n > 0) {
		--n;
		v1[i] = v2[n];
		++i;
	}
}
#include <stdlib.h>
int main()
{
	const int v2[] = { 1, 2, 3, 4, 5 };
	int v1[_countof(v2)];
	intary_rcpy(v1, v2, _countof(v2));
}
