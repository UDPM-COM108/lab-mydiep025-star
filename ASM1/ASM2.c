#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Chuc nang 1
void nhapcheckSoNguyen (int x, int count = 0) {
    printf("\nNhap vao 1 so nguyen: ");
    scanf("%d", &x);
}
void checksoNguyen (int x) {
    if ( x == int x) {
        printf("\n%d la so nguyen", x);
    }
}
int main () {
    int luachon;
    do {
        printf("________________________________________________________\n");
        printf("| WECOME TO DIEP HUYNH NHU MY _ PS49550 _ ASSIGNMENT 2 |\n");
        printf("--------------------------MENU--------------------------\n"); 
        printf("1. Chuc nang so 1: Kiem tra so nguyen.\n");
        printf("2. Chuc nang so 2: Tim uoc so chung va boi so chung cua 2 so\n");
        printf("3. Chuc nang so 3: Chuong trinh tinh tien cho quan Karaoke\n");
        printf("4. Chuc nang so 4: Tinh tien dien\n");
        printf("5. Chuc nang so 5: Chuc nang doi tien\n");
        printf("6. Chuc nang so 6: Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop\n");
        printf("7. Chuc nang so 7: Xay dung chuong trinh vay tien mua xe\n");
        printf("8. Chuc nang so 8: Sap xep thong tin sinh vien\n");
        printf("9. Chuc nang so 9: Xay dung game FPOLY-LOTT(2/15)\n");
        printf("10. Chuc nang so 10: Xay dung chuong trinh tinh toan phan so\n");
        printf("0. Exit: Thoat khoi chuong trinh\n");
        printf(" Nhap lua chon cua ban: ");
        scanf("%d", &luachon);
        switch (luachon) {
            case 1:
                printf("Nhap vao 1 so nguyen: %d \n");
                break;
            case 2:
                printf("\n Nhap vao 2 so nguyen: ");
                break;
            case 3:
                printf("\n Nhap vao gio bat dau, gio ket thuc: ");
                break;
            case 4:
                printf("\n Nhap vao so (kwh) dien su dung: ");
                break;
            case 5:
                printf("\n Nhap vao gio bat dau, gio ket thuc: ");
                break;
            case 6: 
                printf("\n Nhap vao so dien can doi: ");
                break;
            case 7: 
                printf("\n Nhap so tien muon vay: ");
                break;
            case 8:
                printf("\n Nhap vao so phan tram vay toi da: ");
                break;
            case 9:
                printf("\n Nhap vao ho ten, diem cua sinh vien: ");
                break;
            case 10:
                printf("\n Nhap vao tu ban phim 2 so (tu 01 -15): ");
                break;
            case 0:
                printf("\n Nhap vao tu ban phim 2 phan so: ");
                break;
        default:
            break;
        }
    } while ( luachon =! 0);
    return 0;
}