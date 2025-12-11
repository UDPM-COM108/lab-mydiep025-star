#include <stdio.h> 
#include <string.h>

void demtien(int a) {
    int menhGia[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int soLuong[9];
    for (int i = 0; i < 9; i++)
    {
        soLuong[i] = a / menhGia[i];
        a = a % menhGia[i];
    }
    for (int i = 0; i < 9; i++)
    {
        if (soLuong[i] > 0)
        {
            printf("Menh gia %d: %d to\n", menhGia[i], soLuong[i]);
        }
    }
}
int main () {
    int a;
    printf("\nNhap so tien muon doi: %d", a);
    scanf("%d", &a);
    demtien(a);
    return 0;
}