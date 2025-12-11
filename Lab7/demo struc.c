#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct SINHVIEN
{
    char MASV[20];
    char hoten[50];
    float diem;
};
int main() {
    struct SINHVIEN SV1, SV2;
    printf("Nhap masv: ");
    scanf("%s", &SV1.MASV);
    getchar();
    printf("Nhap hoten: ");
    gets(SV1.hoten);
    printf("Nhap diem: ");
    scanf("%f", &SV1.diem);
    printf("\nMASV: %d - Hoten: %s - Diem: %.2f ", SV1.MASV, SV1.hoten, SV1.diem);
    return 0;
}

struct SINHVIEN
{
    char hoten[50];
    double
};





