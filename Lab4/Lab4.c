#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main () {
    int luachon;
    do {
        printf("_________________________________________________\n");
        printf("| WELCOME TO DIEP HUYNH NHU MY _ PS49550_ LAB 4 |\n");
        printf("---------------------- Menu ----------------------\n");
        printf("1. Tinh Trung binh Cua Tong Cua Cac So Tu Nhien Chia Het Cho 2\n");
        printf("2. Xac Dinh So Nguyen To\n");
        printf("3. Xac Dinh So Chinh Phuong\n");
        printf("0. Exit\n");
        printf(" Nhap lua chon cua ban: ");
        scanf("%d", &luachon);
        switch (luachon) {
            case 1: {
                printf("\nNhap vao so min va max: ");
                int min, max;
                scanf("%d %d", &min, &max);
                float tong = 0;
                float bienDem = 0;
                float trungBinh = 0;
                int i = min;
                while ( i <= max) {
                    if (min % 2 == 0) {
                        tong += i;
                        bienDem++;
                    }
                    i++;}
                trungBinh = tong / bienDem;
                    printf("Trung binh cong cac so chia het cho 2 tu %d den %d la: %.2f\n", min, max, trungBinh);
                break;
            }
            case 2:{
                int n;
                printf("\nNhap vao so nguyen duong n:");
                scanf("%d", &n);
                if (n < 2) {
                    printf("%d khong phai la so nguyen to\n", n);
                } else {
                    int count = 0;
                    for (int i = 2; i < n; i++) {
                        if (n % i == 0) {
                            count++;}
                    }  
                    if (count == 0) {
                    printf("%d la so nguyen to\n", n);
                    } else {
                    printf("%d khong phai la so nguyen to\n", n);}
                }
                break; 
            }
            case 3: {
                printf("\nNhap vao so nguyen duong x: ");
                int x;
                scanf("%d", &x);
                if ( x < 1) {
                    printf("%d khong phai la so chinh phuong\n", x);
                    break;
                }
                int count = 0;
                for (int i = 1; i*i <= x; i++) {
                    if (i * i == x) {
                        count = 1;
                        break;}
                    } if ( count == 1) {
                        printf("%d la so chinh phuong\n", x);}
                     else {
                        printf("%d khong phai la so chinh phuong\n", x);}
                break;
            }
            case 0: {
                printf("Thoat chuong trinh...\n");
                exit(0);
            }
            default:
                printf("Lua chon khong hop le! Moi nhap lai\n");
                break;
          } 
        } while (luachon != 0);
    return 0;
}