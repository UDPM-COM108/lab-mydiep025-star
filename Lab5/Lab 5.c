#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    int luachon;
    do {
        printf("__________________________________________________\n");
        printf("| WELCOME TO DIEP HUYNH NHU MY - PS49550 - LAB 5 |\n");
        printf("---------------------- Menu ----------------------\n");
        printf("1. Tim so lon va be nhat trong 3 so da chon\n");
        printf("2. Tinh nam nhuan\n");
        printf("3. Tinh hoan vi\n");
        printf("0. Thoat khoi chuong trinh...\n");
        printf("Nhap lua chon cua ban: \n");
        scanf("%d", &luachon);
        switch (luachon) {
        case 1: {
            double a, b, c ;
            printf("\nNhap 3 so bat ki: ");
            scanf(" %lf %lf %lf", &a, &b, &c);
            double X = sqrt (a);
            printf("Can bac 2 cua %lf là: %lf\n", a, X);
            double max = a;
            if (max < b) max = b;
            if (max < c) max = c;
            printf("Gia tri Max: %lf\n", max);
            double min = a;
            if ( min > b) min = b;
            if ( min > c) min = c;
            printf("Gia tri Min: %lf\n", min);
        }
            break;
        case 2: {
            int year;
            printf("\nNhap vao nam: ");
    scanf("%d", &year);
            if ((year % 4 && year % 100) || (year % 400 ))
            printf("%d la nam nhuan\n", year);
            else {
            printf("%d khong phai la nam nhuan\n", year); }
        }
            break;
        case 3: {
            int a, b;
            printf("\nNhap 2 so a va b: ");
            scanf("%d %d", &a, &b);
            int temp;
            temp = a;
            a = b;
            b = temp;
            printf("\n a sau khi hoan vi la: %d", a);
            printf("\n b sau khi hoan vi la: %d", b);
        }
            break;
        case 0: 
            printf(" Thoat khoi chuong trinh...\n") ;
            exit (0) ;
        default:
           printf("\nLua chon ban nhap khong hop le. Xin vui long chon lai!!!");
            break;
        }
    } while (luachon != 0);
    return 0;
}
