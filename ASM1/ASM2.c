#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

//Chuc nang so 1: Kiem tra so nguyen
void nhapcheckSoNguyen (int x) {
    if (x == (int)x) {
        printf("%d la so nguyen\n", x);
    } else {
        printf("%d khong phai la so nguyen\n", x);
    }
}
void soNguyento (int x, int count) {
    for (int i = 2; i <= x / 2; i++) {
        if (x % i == 0) {
            count++;
        }
    }
    if (count == 0) {
        printf("%d la so nguyen to\n", x);
    } else {
        printf("%d khong phai la so nguyen to\n", x);
    }
}
void soChinhPhuong (int x) {
    int i = sqrt(x);
    if (i * i == x) {
        printf("%d la so chinh phuong\n", x);
    } else {
        printf("%d khong phai la so chinh phuong\n", x);
    }
}
// Chuc nang so 2: Tim uoc so chung va boi so chung cua 2 sos
int uocSoChung (int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}
int boiSoChung (int a, int b) {
    return (a * b) / uocSoChung(a, b);
}
// Chuc nang so 3: Chuong trinh tinh tien cho quan Karaoke
void tinhTienKaraoke (int giobatdau, int gioketthuc) {
    int sogio = gioketthuc - giobatdau;
    float tienthue;
    if (sogio == 3 && giobatdau >= 14 && giobatdau <= 17 && gioketthuc < 21) {
        tienthue = 150000*0.9; }
    else if (sogio == 3 && giobatdau > 17 && gioketthuc < 21) {
        tienthue = 150000; }
    else if (sogio >= 4 && sogio <= 11 && giobatdau >= 14 && giobatdau <= 17 && gioketthuc < 21) { 
        tienthue = (150000 + (sogio - 3)*35000)*0.9; }
    else if (sogio >= 4 && giobatdau > 17 && gioketthuc < 21) {
        tienthue = 150000 + 150000*0.7; } 
    else { printf("Gio khong hop le, vui long nhap lai!\n"); }   
    printf("So tien phai tra sau %d gio la: %.0f VND\n", sogio, tienthue);
}
// Chuc nang so 4: Tinh tien dien
void tiendien(int sodien) {
    float bac1, bac2, bac3, bac4, bac5, bac6;
    if ( sodien <= 50 ) {
        bac1 = sodien * 1.678;
        printf("So tien dien phai tra la: %.2f VND\n", bac1);
    } else if (sodien <= 100) {
        bac2 = sodien * 1.674 + 50 * 1.678;
        printf("So tien dien phai tra la: %.2f VND\n", bac2);
    } else if (sodien <= 200) {
        bac3 = 50 * 1.678 + ( sodien - 50 ) * 1.734 + ( sodien - 100 ) * 2.014;
        printf("So tien dien phai tra la: %.2f VND\n", bac3);
    } else if (sodien <= 300) {
        bac4 = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + ( sodien - 200 ) * 2.536;
        printf("So tien dien phai tra la: %.2f VND\n", bac4);
    } else if (sodien <= 400) {
        bac5 = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + ( sodien - 300 ) * 2.834;
        printf("So tien dien phai tra la: %.2f VND\n", bac5);
    } else {
        bac6 = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100 * 2.834 + ( sodien - 400 ) * 2.927;
        printf("So tien dien phai tra la: %.2f VND\n", bac6);
    }
}
// Chuc nang so 5: Chuc nang doi tien


// Chuc nang so 6: Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop
// Chuc nang so 7: Xay dung chuong trinh vay tien mua xe
void vaytienmuaxe () {

}
// Chuc nang so 8: Sap xep thong tin sinh vien
struct SinhVien {
    int HoTen [50];
    float Diem;
} sv1;
void hocluc (float Diem) {
    if (Diem >= 9 && Diem <= 10) {
        printf("Hoc luc: Xuat sac\n");
    } else if (Diem >= 8 && Diem < 9) {
        printf("Hoc luc: Gioi\n");
    } else if (Diem >= 6.5 && Diem < 8) {
        printf("Hoc luc: Kha\n");
    } else if (Diem >= 5 && Diem < 6.5) {
        printf("Hoc luc: Trung binh\n");
    } else if (Diem >= 0 && Diem < 5) {
        printf("Hoc luc: Yeu\n");
    } else {
        printf("Diem khong hop le\n");
    }
}   
// Chuc nang so 9: Xay dung game FPOLY-LOTT(2/15)
// Chuc nang so 10: Xay dung chuong trinh tinh toan phan so





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
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luachon);
        switch (luachon) {
            case 1:
            int x;
                printf("\nNhap vao so nguyen: ");
                scanf("%d", &x);
                nhapcheckSoNguyen(x);
                soNguyento(x, 0);
                soChinhPhuong(x);
                printf("\n");
                break;
            case 2:
                printf("\nNhap vao 2 so nguyen: ");
                break;
            case 3:
            int giobatdau;
            int gioketthuc;
                printf("\nNhap vao gio bat dau: ");
                scanf("%d", &giobatdau);
                printf("Nhap vao gio ket thuc: ");
                scanf("%d", &gioketthuc);
                tinhTienKaraoke( giobatdau, gioketthuc );
                break;
            case 4:
                int sodien;
                printf("\nNhap vao so (kwh) dien su dung: ");
                scanf("%d", &sodien);
                tiendien( sodien );
                break;
            case 5: 
                int sotien;
                printf("\n Nhap vao so tien can doi: ");
                scanf("%d", &sotien);
                break;
            case 6: 
                printf("\n Nhap so tien muon vay: ");
                break;
            case 7: 
                printf("\nNhap vao so phan tram vay toi da: ");
                break;
            case 8:
                printf("\nNhap vao ho ten sinh vien: ");
                scanf("%s", sv1.HoTen);
                getchar();
                printf("\nNhap vao diem trung binh sinh vien: ");
                scanf("%f", &sv1.Diem);
                hocluc(sv1.Diem);
                printf("\n");
                break;
            case 9:
                printf("\n Nhap vao tu ban phim 2 so (tu 01 -15): ");
                break;
            case 10:
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

