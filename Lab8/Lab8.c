#include <stdio.h>
#include <string.h>

struct SinhVien {
    int MaSV;
    char HoTen[50];
    float DiemTB;
    char hocLuc[20];
};

void nhapSinhVien(struct SinhVien x[], int n) {
    int i;
    for (i = 0; i < n; i++) {
    printf("Nhap MaSV[%d]: ",i);
    scanf("%d", &x[i].MaSV);
    printf("Nhap HoTen[%d]: ",i);
    scanf("%d", x[i].HoTen);
    printf("Nhap DiemTB[%d]: ",i);
    scanf("%f", &x[i].DiemTB);

    }
}
void inputStructSinhVien(struct SinhVien x[], int n) {
    for ( i=0; i<n ; i++) {

    }
}

void printSinhVien(struct SinhVien x[], int n) {
    for (i=0; i<n ; i++) {
        printf("MaSV: %d\n", x[i].MaSV);
        printf("HoTen: %s\n", x[i].HoTen);
        printf("DiemTB: %.2f\n", x[i].DiemTB);
    }
}

void XepLoaiSinhVien(struct SinhVien x[], int n) {
    for ( i=0; i<n ; i++) {
        if (x[i].DiemTB < 5) {
            strcpy(x[i].hocLuc, "Yeu");
        } else if (x[i].DiemTB < 6.5) {
            strcpy(x[i].hocLuc, "Trung Binh");
        } else if (x[i].DiemTB < 8) {
            strcpy(x[i].hocLuc, "Kha");
        } else if (x[i].DiemTB < 9) {
            strcpy(x[i].hocLuc, "Gioi");
        } else {
            strcpy(x[i].hocLuc, "Xuat Sac");
        }
    }
}
void swapStructSinhVien(struct SinhVien *a, struct SinhVien *b) {
    struct SinhVien temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int i, j, slsv;
    struct SinhVien SD2130x[31];
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &slsv);
    inputStructSinhVien(SD2130x, slsv);
    printSinhVien(SD2130x, slsv);
    XepLoaiSinhVien(SD2130x, slsv);
    for( i = 0; i < slsv - 1; i++) {
        for (j = i + 1; j < slsv; j++) {
            if (SD2130x[i].DiemTB < SD2130x[j].DiemTB) {
                swapStructSinhVien(&SD2130x[i], &SD2130x[j]);
            }
        }
    }
    printf("\nDanh sach sinh vien sau khi sap xep theo diem TB giam dan:\n");
    return 0;
}