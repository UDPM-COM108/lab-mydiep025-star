#include <stdio.h> 
int main(){
  // Bai 5: Tinh Chu Vi và Dien Tich Hinh Tam Giac
    float canhA, canhB, canhC, chuviTamGiac, dientichTamGiac, p;
    printf("\nNhap do dai 3 canh tam giac: ");
    scanf("%f %f %f", &canhA, &canhB, &canhC);
    chuviTamGiac = canhA + canhB + canhC;
    p = chuviTamGiac / 2;
    dientichTamGiac = (p * (p - canhA) * (p - canhB) * (p - canhC));
    printf(" Chu vi hinh tam giac la: %.2f\n", chuviTamGiac);
    printf(" Dien tich hinh tam giac la: %.2f\n", dientichTamGiac);

    // Bai 6: Tinh chu vi va dien tich tam giac vuong
    float canh1, canh2, chuviTGvuong, dientichTGvuong;
    printf("\nNhap do dai 2 canh ke nhau cua tam giac vuong: ");
    scanf("%f %f", &canh1, &canh2);                         
    return 0;
}