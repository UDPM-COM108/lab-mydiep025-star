#include <stdio.h>
#include <string.h>

struct NhanVien {
    char MaNV[10];
    char HoTen [100];
    int SoNgayCong;
    int Luong;
} ;
void nhapNhanVien (struct NhanVien x[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Nhap MaNV[%d]: ",i);
        scanf("%s", x[i].MaNV);
        printf("Nhap HoTen[%d]: ",i);
        scanf("%s", x[i].HoTen);
        printf("Nhap SoNgayCong[%d]: ",i);
        scanf("%d", &x[i].SoNgayCong);
    }
}
void printNhanVien(struct NhanVien x[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%-10s", x[i].MaNV);
        printf("%-20s", x[i].HoTen);
        printf("%-35d", x[i].SoNgayCong);
        printf("%-10d VND.\n", x[i].Luong);
    }
}
void tinhLuong (struct NhanVien x[], int n) {
    int i;
    int luongCB = 1500000;
    int luongNgay = 1500000/25 ;
    for (i = 0; i < n; i++) {
        if (x[i].SoNgayCong < 25) {
            x[i].Luong = (x[i].SoNgayCong * luongNgay) * 0.9;
        } else if (x[i].SoNgayCong > 25) {
            x[i].Luong = luongCB + ((x[i].SoNgayCong - 25) * luongNgay * 2);
        } else {
            x[i].Luong = luongCB;
        }
    }
}
void swapStructNhanVien(struct NhanVien *a, struct NhanVien *b) {
    struct NhanVien temp = *a;
    *a = *b;
    *b = temp;
}
int main () {
    int i, j, slnv;
    struct NhanVien nv[50];
    printf("Nhap so luong nhan vien: ");
    scanf("%d", &slnv);
    nhapNhanVien(nv, slnv);
    tinhLuong(nv, slnv);
    printf("Bang thong tin Nhan Vien sau khi tinh luong: \n");
    printf("%-10s %-30s %-15s %-10s\n", "MaNV", "HoTen", "SoNgayCong", "Luong");
    printNhanVien(nv, slnv);
    // Sap xep bang hang ngang qua trai ve thong tin Nhan Vien theo thu tu tang dan
    printf("\nBang thong tin Nhan Vien sau khi sap xep theo MaNV tang dan: \n");
    printf("%-10s %-30s %-15s %-10s\n", "MaNV", "HoTen", "SoNgayCong", "Luong");
    for (i = 0; i < slnv - 1; i++) {
        for (j = i + 1; j < slnv; j++) {
            if (strcmp(nv[i].MaNV, nv[j].MaNV) > 0) {
                swapStructNhanVien(&nv[i], &nv[j]);
            }
        }
    }
    printNhanVien(nv, slnv);
    return 0;
}

