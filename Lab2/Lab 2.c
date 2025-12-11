#include <stdio.h> 
int main(){
  // Bai 1: Tinh tong va hieu cua 2 so nguyen
    int a, b;
    printf(" Nhap 2 so a va b:");
    scanf("%d%d", &a, &b);
    printf ("Tong cua %d va %d la: %d\n", a + b);
    printf ("\nHieu cua %d va %d la: %d\n", a - b);

  // Bai 2: Tinh dien chu vi va dien tich hinh chu nhat
    float chieudai, chieurong, dientich, chuvi;
    printf("\nNhap chieu dai va chieu rong hinh chu nhat: ");  
    scanf("%f %f", &chieudai, &chieurong);
    dientich = chieudai * chieurong;
    chuvi = 2 * (chieudai + chieurong);
    printf(" Chu vi hinh chu nhat la: %.2f\n", chuvi );
    printf(" Dien tich hinh chu nhat la: %.2f\n", dientich);
    
  // Bai 3: Tinh chu vi va dien tich hinh tron
    float bankinh, dientichhinhtron, chuvihinhtron;
    const float pi = 3.14;
    printf("\nNhap ban kinh hinh tron: ");
    scanf("%f", &bankinh);
    dientichhinhtron = pi * bankinh * bankinh;
    chuvihinhtron = 2 * pi * bankinh;
    printf(" Chu vi hinh tron la: %.2f\n", chuvihinhtron);
    printf(" Dien tich hinh tron la: %.2f\n", dientichhinhtron);

  // Bai 4: Xay Dung Chuong Trinh Tinh Diem Trung Binh
    float diemToan, diemLy, diemHoa, diemTB;
    printf("\nNhap diem Toan, Ly, Hoa: ");
    scanf("%f %f %f", &diemToan, &diemLy, &diemHoa);
    diemTB = (diemToan + diemLy + diemHoa) / 3;
    printf(" Diem trung binh la: %.2f\n", diemTB);

  // Bai 5: Tinh Chu Vi và Dien Tich Hinh Tam Giac
    float canhA, canhB, canhC, chuviTamGiac, dientichTamGiac, p;
    printf("\nNhap do dai 3 canh tam giac: ");
    scanf("%f %f %f", &canhA, &canhB, &canhC);
    chuviTamGiac = canhA + canhB + canhC;
    p = chuviTamGiac / 2;
    dientichTamGiac = (p * (p - canhA) * (p - canhB) * (p - canhC));
    printf(" Chu vi hinh tam giac la: %.2f\n", chuviTamGiac);
    printf(" Dien tich hinh tam giac la: %.2f\n", dientichTamGiac);13212
    return 0;
}
