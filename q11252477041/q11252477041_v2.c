void intary_rcpy(int v1[], const int v2[], int n)
{
	const int* const v2_0 = v2;
	for (v2 += n;v2_0 < v2;)
		*v1++ = *--v2;
}
#include <stdlib.h>
int main()
{
	const int v2[] = { 1, 2, 3, 4, 5 };
	int v1[_countof(v2)];
	intary_rcpy(v1, v2, _countof(v2));
}
