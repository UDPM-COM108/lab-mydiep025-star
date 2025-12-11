#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//Chuc nang so 1: Kiem tra so nguyen
void nhapcheckSoNguyen (int x) {
    if (x == (int)x) {
        printf("%d la so nguyen\n", x);
    } else {
        printf("%d khong phai la so nguyen\n", x); }
}
void soNguyento (int x, int count) {
    for (int i = 2; i <= x / 2; i++) {
        if (x % i == 0) {
            count++; }
    }
    if (count == 0) {
        printf("%d la so nguyen to\n", x);} 
        else {
        printf("%d khong phai la so nguyen to\n", x); }
}
void soChinhPhuong (int x) {
    int i = sqrt(x);
    if (i * i == x) {
        printf("%d la so chinh phuong\n", x);
    } else {
        printf("%d khong phai la so chinh phuong\n", x); }
}
// Chuc nang so 2: Tim uoc so chung va boi so chung cua 2 so
int uocSoChungLonNhat (int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b; }
        else {
            b = b - a; }
    }
    return a;
}
int boiSoChungNhoNhat (int a, int b) {
    return (a * b) / uocSoChungLonNhat(a, b);
}
// Chuc nang so 3: Chuong trinh tinh tien cho quan Karaoke
float tinhtienkaraoke(int a, int b)
{
    int sogio = b - a;
    float tongtien = 0;
    if (sogio <= 3) {
        tongtien = sogio * 150000;
    }
    else {
        tongtien = 3 * 150000 + ((sogio - 3) * 150000 * 0.7);
    }
    if (a > 14 && a < 17) {
        tongtien = tongtien * 0.9;
    }
    return tongtien;
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
void tinhlaisuat(double a) {
    double gocphaitra = a / 12;
    double laiphaitra = 0;
    double sotienconlai = a;
    double sotienphaitra = 0;
    for (int i = 1; i <= 12; i++)
    {
        laiphaitra = sotienconlai * 0.05;
        sotienphaitra = gocphaitra + laiphaitra;
        sotienconlai -= gocphaitra;
        printf("\n%-10d %-15.0f %-15.0f %-15.0f %-15.0f", i, laiphaitra, gocphaitra, sotienphaitra, sotienconlai);
    }
}
// Chuc nang so 7: Xay dung chuong trinh vay tien mua xe
void vayMuaXe(int phantramvay) {
    double tienvaymax = 500000;
    int nam = 24, thang = 24 * 12;
    double sotienlai;
    printf("So tien tra ban dau la %.3f", tienvaymax - (tienvaymax * phantramvay / 100.0));
    double sotienconlai = tienvaymax - (tienvaymax - (tienvaymax * phantramvay / 100.0));
    double sogocphaitra = sotienconlai / thang;
    double sotienphaitra;
    printf("\n%-5s %-20s %-20s %- 20s", "So tien con lai", "so tien lai", "So tien phai tra", "Thang");
    for (int i = 1; i <= thang; i++)
    {
        sotienlai = sotienconlai * 0.006;
        sotienphaitra = sogocphaitra + sotienlai;
        sotienconlai -= sogocphaitra;
        printf("\n%-20.0f %-20.0f %-17.0f %d", sotienconlai, sotienlai, sotienphaitra, i);
    }
    
}
// Chuc nang so 8: Sap xep thong tin sinh vien
struct Sinhvien
{
    char hoten[50];
    float diem;
    char hocLuc[50];
};
void Nhapthongtinsinhvien(struct Sinhvien sv[], int n)
{
    while (getchar() != '\n')
        ;
    for (int i = 0; i < n; i++)
    {
        printf("Nhap thong tin sinh vien thu %d\n", i + 1);
        printf("Ho ten: ");
        gets(sv[i].hoten);
        printf("Diem ");
        scanf("%f", &sv[i].diem);
        while (getchar() != '\n')
            ;
        if (sv[i].diem >= 9)
        {
            strcpy(sv[i].hocLuc, "Xuat sac");
        }
        else if (sv[i].diem >= 8)
        {
            strcpy(sv[i].hocLuc, "Gioi");
        }
        else if (sv[i].diem >= 6.5)
        {
            strcpy(sv[i].hocLuc, "Kha");
        }
        else if (sv[i].diem >= 5)
        {
            strcpy(sv[i].hocLuc, "Trung Binh");
        }
        else
        {
            strcpy(sv[i].hocLuc, "Yeu");
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sv[i].diem < sv[j].diem)
            {
                struct Sinhvien temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }
    printf("\n%-25s %-5s %10s", "Ho ten", "Diem", "Hoc Luc");
    for (int i = 0; i < n; i++)
    {
        printf("\n%-25s %-5.2f %10s", sv[i].hoten, sv[i].diem, sv[i].hocLuc);
    }
}
// Chuc nang so 9: Xây dựng game FPOLY-LOTT(2/15)
// Chuc nang so 10: Xay dung chuong trinh tinh toan phan so
int main () {
    int luachon;
    do {
        printf("\n________________________________________________________\n");
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
                printf("\n1. Chuc nang kiem tra so nguyen, so nguyen to, so chinh phuong");
                printf("\nNhap vao so nguyen: ");
                scanf("%d", &x);
                nhapcheckSoNguyen(x);
                soNguyento(x, 0);
                soChinhPhuong(x);
                printf("\n");
                break;
            case 2:
                printf("\n2.Tim uoc so chung lon nhat va boi chung nho nhat cua 2 so");
                printf("\nNhap vao 2 so nguyen: ");
                int a, b;
                scanf("%d %d", &a, &b);
                printf("Uoc so chung lon nhat cua %d va %d la: %d\n", a, b, uocSoChungLonNhat(a, b));
                printf("Boi so chung nho nhat cua %d va %d la: %d\n", a, b, boiSoChungNhoNhat(a, b));
                printf("\n");
                break;
            case 3:
            int giobatdau;
            int gioketthuc;
                printf("3. Tinh tien vao hat karaoke");
                printf("\nNhap vao gio bat dau: ");
                scanf("%d", &giobatdau);
                printf("Nhap vao gio ket thuc: ");
                scanf("%d", &gioketthuc);
                printf("so tien karaoke la %.3f",tinhtienkaraoke(giobatdau,gioketthuc));
                break;
            case 4:
                int sodien;
                printf("\n4. Tinh tien dien su dung");
                printf("\nNhap vao so (kwh) dien su dung: ");
                scanf("%d", &sodien);
                tiendien( sodien );
                break;
            case 5: 
                break;
            case 6: 
            double sotien;
            printf("\n6. vay tien lai suat ngan hang");
            printf("\nNhap so tien muon vay ");
            scanf("%lf", &sotien);
            tinhlaisuat(sotien);
                break;
            case 7: 
            printf("\n7. Vay tien mua xe");
            int phantramvay;
            printf("\nNhap so phan tram vay: ");
            scanf("%d", &phantramvay);
            vayMuaXe(phantramvay);
                break;
            case 8:
            printf("\n8. Sap xep thong tin sinh viên");
            int n;
            printf("\nNhap so luong sinh vien ");
            scanf("%d", &n);
            struct Sinhvien sv[100];
            Nhapthongtinsinhvien(sv, n);
            break;
            case 9:
                break;
            case 10:
                break;
            case 0:
                printf("\n Nhap vao tu ban phim 2 phan so: ");
                break;
        default:
            printf("Lua chon khong hop le, vui long chon lai!\n");
            break;
        }
    } while ( luachon =! 0);
    return 0;
}
    
