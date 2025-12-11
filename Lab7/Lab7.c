#include <stdio.h>
#include <string.h>
#include <conio.h>
// Bai 1: Xay dung chuong trinh dem so luong nguyen am va phu am trong chuoi
    // DEM SO LUONG NGUYEN AM
    int demNguyenAm(char str[]) {
    int dem = 0, i = 0, am = 0;
    while (str[i]) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            dem++;
        }
        i++;
    }
    return dem;
}
    // DEM SO LUONG PHU AM
    int demPhuAm(char str[]) { 
    int dem = 0;
    int i = 0;
    dem = strlen(str) - demNguyenAm(str); 
    return dem;
}
// Bai 2: Xay dung chuong trinh dang nhap bang username va password
    int dangNhap(char username[50], char password[50]) {
    char userSys[] = "admin";
    char passSys[] = "admin123";
    if (strcmp(username, userSys) == 0 && strcmp(password, passSys) == 0) {
        return 1; 
    } else {
        return 0; 
    }
    }
// Bai 3: Xay dung chuong trinh sap xep chuoi theo chu cai
    void nhap(char s[][20]) {
        for (int i = 0; i < 5; i++) {
            printf("Nhap chuoi thu %d: ", i + 1);
            gets(s[i]);
        }
         
    }
    void xuat(char s[][20]) {
        for (int i = 0; i < 5; i++) {
            printf("%s\n", s[i]);
        }
    }
    void sort(char s[][20]) {
        char temp[20];
        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 5; j++) {
                if (strcmp(s[i], s[j]) > 0) {
                        char temp[20];
                        strcpy(temp, s[i]); 
                        strcpy(s[i], s[j]);
                        strcpy(s[j], temp);
                }   
            }
        }
    }
// XUAT CHUONG TRINH CHINH
int main() {
    // Bai 1: Dem so luong nguyen am va phu am trong chuoi
    char str[100];
    puts("Nhap chuoi: ");
    gets(str);
    printf("So luong nguyen am trong chuoi: %d\n", demNguyenAm(str));
    printf("So luong phu am trong chuoi: %d\n", demPhuAm(str));

    // Bai 2: Dang nhap bang username va password
    char username[50];
    char password[50];
    puts("Nhap username: ");
    gets(username);
    puts("Nhap password: ");
    gets(password);
    if (dangNhap(username, password)) {
        printf("Dang nhap thanh cong!\n");
    } else {
        printf("Dang nhap that bai! Sai username hoac password.\n");
    }

    // Bai 3: Sap xep chuoi theo chu cai
    char s[5][20];
    nhap(s);
    xuat(s);
    printf("Chuoi sau khi sap xep:\n");
    sort(s);
    xuat(s);
    _getch();
    return 0;
}