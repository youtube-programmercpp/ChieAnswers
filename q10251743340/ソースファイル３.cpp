#include"6-4.h"
int MIN3;
void min3(int a, int b, int c) {
MIN3 = a;
if (b < MIN3)MIN3 = b;
if (c < MIN3)MIN3 = c;
}
