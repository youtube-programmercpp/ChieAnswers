#include"6-4.h"
double AVE_MIN_MAX;
double ave3(int a, int b, int c) {
	double ave;
	ave = (a + b + c) / 3.;
	AVE_MIN_MAX = (MIN3 + MAX3) / 2.;
	return ave;
}
