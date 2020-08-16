
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <Windows.h> //sleep(1000);
#include "TichPhan.h"
void main() {
	int a = 0, b = 0, i = 0;
	printf("Tinh tich phan trong [a, b]\r\n");
	printf("a: ");  scanf("%d", &a);
	printf("b: ");  scanf("%d", &b);
	printf("Tich phan cua SinX: %f\r\n", TichPhan(a, b, Sin));
	printf("Tich phan cua CosX: %f\r\n", TichPhan(a, b, Cos));
	printf("Tich phan cua X^2: %f\r\n", TichPhan(a, b, pow));
	printf("Tich phan cua sqrt(x): %f\r\n", TichPhan(a, b, Sqrt));
}