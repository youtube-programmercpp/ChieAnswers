#include"6-4.h"
int MAX3;
void max3(int a, int b, int c) {
	MAX3 = a;
	if (b > MAX3)MAX3 = b;
	if (c > MAX3)MAX3 = c;
}
