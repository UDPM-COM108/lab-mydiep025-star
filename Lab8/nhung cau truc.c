#include <stdio.h>
#include <string.h>

struct SinhVien {
    int MaSV;
    char HoTen[50];
    float DiemTB;
    struct Date {
        int ngay;
        int thang;
        int nam;
    } ngaysinh;
} sv1; 

int main() {
sv1.MaSV = 49550;
strcpy(sv1.HoTen, "Diep Huynh Nhu My");
sv1.ngaysinh.ngay = 03;
sv1.ngaysinh.thang = 01;
sv1.ngaysinh.nam = 2007;
//
printf("MaSV: %d\n", sv1.MaSV);
printf("HoTen: %s\n", sv1.HoTen);
printf("Ngay sinh (dd/mm/yy): %02d/%02d/%04d\n", sv1.ngaysinh.ngay, sv1.ngaysinh.thang, sv1.ngaysinh.nam);
return 0;
}
