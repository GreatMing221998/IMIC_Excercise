#include <stdio.h>
#pragma pack(push)  /* push current alignment to stack */
#pragma pack(1)     /* set alignment to 1 byte boundary */

typedef struct {
	int Tu;
	int Mau;
}PhanSo;

PhanSo HamLoc(PhanSo* C) {
	if ((C->Tu < 0 && C->Mau < 0) || (C->Tu > 0 && C->Mau < 0)) {
		C->Tu *= -1;
		C->Mau *= -1;
	}
}
PhanSo NhanPhanSo(PhanSo A, PhanSo B) {
	PhanSo KetQua;
	KetQua.Tu = A.Tu * B.Tu;
	KetQua.Mau = A.Mau * B.Mau;
	HamLoc(&KetQua);
	return KetQua;
}
PhanSo CongPhanSo(PhanSo A, PhanSo B) {
	PhanSo KetQua;
	KetQua.Tu = A.Tu * B.Mau + B.Tu*A.Mau;
	KetQua.Mau = A.Mau * B.Mau;
	HamLoc(&KetQua);
	return KetQua;
}
PhanSo TruPhanSo(PhanSo A, PhanSo B) {
	PhanSo KetQua;
	KetQua.Tu = A.Tu * B.Mau - B.Tu * A.Mau;
	KetQua.Mau = A.Mau * B.Mau;
	HamLoc(&KetQua);
	return KetQua;
}
PhanSo ChiaPhanSo(PhanSo A, PhanSo B) {
	PhanSo KetQua;
	KetQua.Tu = A.Tu * B.Mau;
	KetQua.Mau = A.Mau * B.Tu;
	HamLoc(&KetQua);
	return KetQua;
}
PhanSo RutGon(PhanSo* C) {
	int min = (C->Tu < C->Mau) ? C->Tu : C -> Mau;
	int Pmin = (min > 0) ? min : -1 * min;
	for (Pmin; Pmin >= 1; Pmin--) {
		if (C->Tu % Pmin == 0 && C->Mau % Pmin == 0)
			break;
	}
	C->Tu = C->Tu / Pmin;
	C->Mau = C->Mau / Pmin;
	HamLoc(&C);
}

void main() {
	PhanSo A;
	PhanSo B;
	PhanSo C;
	PhanSo D;
	PhanSo E;
	PhanSo F;
	A.Tu = 2;
	A.Mau = 7;
	B.Tu = -5;
	B.Mau = 2;
	C = NhanPhanSo(A, B);
	printf("Nhan: %d/%d\r\n", C.Tu, C.Mau);
	RutGon(&C);
	printf("%d/%d\r\n", C.Tu, C.Mau);
	D = CongPhanSo(A, B);
	printf("Cong: %d/%d\r\n", D.Tu, D.Mau);
	RutGon(&D);
	printf("%d/%d\r\n", D.Tu, D.Mau);
	E = TruPhanSo(A, B);
	printf("Tru: %d/%d\r\n", E.Tu, E.Mau);
	RutGon(&E);
	printf("%d/%d\r\n", E.Tu, E.Mau);
	F = ChiaPhanSo(A, B);
	printf("Chia: %d/%d\r\n", F.Tu, F.Mau);
	RutGon(&F);
	printf("%d/%d\r\n", F.Tu, F.Mau);
}