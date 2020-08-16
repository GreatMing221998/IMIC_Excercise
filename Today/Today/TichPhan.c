#include "TichPhan.h"
double pow(float x) {
	return x * x;
}

double Sin(float x) {
	return sin(x);
}

double Cos(float x) {
	return cos(x);
}

double Sqrt(float x) {
	return sqrt(x);
}

float TichPhan(int a, int b, double(*choose)(float)) {
	float s = 0;
	float h = (float)(b - a) / 1000;
	float x1 = a;
	float x2 = 0;
	for (int i = 0; i < 1000; i++) {
		x2 = x1 + h;
		s += (h * (choose(x1) + choose(x2))) / 2;
		x1 = x2;
	}
	return s;
}