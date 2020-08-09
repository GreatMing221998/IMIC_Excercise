#include "TichPhan.h"

float TichPhanX2(int a, int b) {
	float s = 0;
	float h = (float)(b - a) / 1000;
	float x1 = a;
	float x2 = 0;
	for (int i = 0; i < 1000; i++) {
		x2 = x1 + h;
		s += (h * (x1 * x1 + x2 * x2)) / 2;
		x1 = x2;
	}
	return s;
}