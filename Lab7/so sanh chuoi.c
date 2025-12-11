#include <stdio.h>
#include <string.h>
int main() {
    char str1[20],str2[20];
    printf("Nhap chuoi 1: ");
    gets(str1) ;
    printf("Do dai cua chuoi 1: %d ",strlen(str1));
    printf("\nNhap chuoi 2: ");
    gets(str2) ;
    printf("\nDo dai cua chuoi 2: %d ",strlen(str2));
    /*if ( strcmp(str1, str2) == 0){
        printf("\nChuoi 1 bang chuoi 2");
    } else if(strcmp(str1, str2) > 0) {
        printf("\nChuoi 1 lon hon chuoi 2");
    } else {
        printf(" Chuoi 1 nho hon chuoi 1");
    }*/

    // dao nguoc chuoi
    /*char str[20];
    printf("Nhap chuoi: ");
    gets(str);*/
    /*printf("\nChuoi da nhap: %s", str1);  
    printf("\nChuoi dao nguoc: %s", strrev(str1));*/

    // Viet hoa chuoi va viet thuong chuoi
    /*printf("\nChuoi da nhap: %s", str1); 
    printf("\nChuoi chu thuong la: %s", strlwr(str1));
    printf("\nChuoi chu hoa: %s", strupr(str1));*/

    char str[30] = "Learning a C is awesome ";
    char str2[15] = "C";
    if(strstr(str1, str2) != NULL) {
        printf("tim thay");
    } else {
        printf("khong tim thay");
    }

    return 0;
}