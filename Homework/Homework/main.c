#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int TongBinhPhuongSoLe(int n) {
	int s = 0;
	for (int i = 1; i <= n; i+=2) {
		s += i * i;
	}
	return s;
}
int max(int a, int b, int c) {
	int Max = (a > b && a > c) ? a : (b > a && b > c) ? b : c;
	return Max;
}
char check(int d) {
	if (d % 2 == 0) {
		return 1;
	}
	return 0;
}
int UCLN(int x, int y) {
	if (y == 0) return x;
	return UCLN(x, x % y);
}
void main() {
	int n = 0, a = 0, b = 0, c = 0, d = 0, x =0, y =0; 
	printf("Nhap n: "); scanf("%d", &n);
	printf("Tong binh phuong cac so le tu 1 den n: %d\r\n", TongBinhPhuongSoLe(n));
	printf("Tim Max cua a, b, c\r\n");
	printf("Nhap a: "); scanf("%d", &a);
	printf("Nhap b: "); scanf("%d", &b);
	printf("Nhap c: "); scanf("%d", &c);
	printf("Max(a,b,c): %d\r\n", max(a, b, c));
	printf("Kiem tra chan hoac le\r\n");
	printf("Nhap so: "); scanf("%d", &d);
	if (check(d)) {
		printf("Chan\r\n");
	}
	else
	{
		printf("Le\r\n");
	}
	printf("UCLN\r\n");
	printf("Nhap so x: "); scanf("%d", &x);
	printf("Nhap so y: "); scanf("%d", &y);
	printf("UCLN cua x va y: %d", UCLN(x, y));
}