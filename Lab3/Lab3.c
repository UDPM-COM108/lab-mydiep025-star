#include <stdio.h>
 int main() {
    // Bai 1: Nhap diem trung binh va in ra xep loai
    double diemTb;
    printf("Nhap diem trung binh:");
    scanf("%lf", &diemTb);
    if(diemTb>=9) {
        printf("Xuat sac");
    } else if (diemTb >= 8) {
        printf("Gioi");
    } else if (diemTb >= 7) {
        printf("Kha");
    } else if (diemTb >= 5) {
        printf("Trung binh");
    } else 
        printf(" Yeu");

    // Demo slide 2 
    printf("Viet Nam co bao nhieu dan toc anh em:\n");
    printf("a. 52\nb. 53\nc. 54\nd. 55\n");
    printf(" Xin moi ban chon dap an (a, b, c, d):");
    char dapAn;
    scanf("%s", &dapAn);
    switch(dapAn) {
        case 'a':
            printf("Sai roi! Dap an dung la 54 dan toc");
            break;
        case 'b':
            printf("Sai roi! Dap an dung la 54 dan toc");
            break;
        case 'c':
            printf("Chinh xac! Viet Nam co 54 dan toc anh em");
            break;
        case 'd':
            printf("Sai roi! Dap an dung la 54 dan toc");
            break;
        default:
            printf("Dap an khong hop le!");
    }
    return 0;
 }