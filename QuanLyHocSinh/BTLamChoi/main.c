#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#pragma pack(push)  /* push current alignment to stack */
#pragma pack(1)     /* set alignment to 1 byte boundary */
typedef struct {
    int tuoi;
    float can_nang;
    char ten[20];
}SV;
SV Nhap(SV* A, int n) {
    for (int i = 0; i < n; ++i)
    {
        printf("Ten: ");
        scanf("%s", (A + i)->ten);
        printf("Tuoi: ");
        scanf("%d", &(A + i)->tuoi);
        printf("Can nang: ");
        scanf("%f", &(A + i)->can_nang);
    }
}
void Xuat(SV* A, int n) {
    for (int i = 0; i < n; ++i)
        printf("Ten: %s\t|Tuoi: %d\t|Can nang: %0.1f Kg\n", \
            (A + i)->ten, (A + i)->tuoi, (A + i)->can_nang);
}
int main()
{
    SV* ptr;
    int n = 0;
    printf("So hoc sinh: ");
    scanf("%d", &n);
    ptr = (SV*)calloc(n, sizeof(SV));
    Nhap(ptr, n);
    Xuat(ptr, n);
    free(ptr);
    return 0;
}
