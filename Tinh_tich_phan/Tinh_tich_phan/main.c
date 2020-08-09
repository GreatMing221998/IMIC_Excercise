#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "TichPhan.h"
void main() {
	int a = 0, b = 0;
	printf("Tinh tich phan cua X^2 trong [a, b]\r\n"); 
	printf("a: ");  scanf("%d", &a);
	printf("b: ");  scanf("%d", &b);
	printf("%f", TichPhanX2(a, b));
}
