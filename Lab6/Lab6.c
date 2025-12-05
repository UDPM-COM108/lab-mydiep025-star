#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M 50
#define N 50
// Bai 2: Tim gia tri lon nhat va nho nhat trong mang 1 chieu
void nhapMangminmax(int a[],int x){
    for(int i=0;i<x;i++){
        printf("Nhap phan tu thu %d la: ",i);
		scanf("%d",&a[i]);
    }
}
int max(int a[],int x){
	int max = a[0];
	for(int i=1;i<x;i++){	
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
int min(int a[],int x){
	int min = a[0];
	for(int i=1;i<x;i++){	
		if(a[i]<min){
			min=a[i];
		}
	}
	return min;
}
// Bai 3: Sap xep mang theo thu tu giam dan
void nhapMangsapxep(int b[],int t) {
    for(int i=0;i<t;i++){
        printf("Nhap phan tu thu [%d] la: ",i);
		scanf("%d",&b[i]);
    }
}
int kiemtra(int b[],int t){
	int temp=0;
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			if(b[i]>b[j]){
				temp=b[i];
                b[i]=b[j];
                b[j]=temp;
			}
		}
	}
	return temp;
}
//Bai 4: Tinh binh phuong phan tu trong mang 2 chieu
void nhapMatran( int c[M][N], int m, int n) {
    for (int i = 0; i < m; i++) {
        for ( int j = 0; j < n; j++)  {
        printf(" Nhap phan tu cua hang [%d] va phan tu cua cot [%d]: ", i, j);
        scanf("%d", &c[i][j]);
        }
    }
}
void xuatMatran( int c[M][N], int m, int n) {
    printf("\n");
    for(int i = 0; i < m; i++) {
        for ( int j = 0; j < n; j++) {
        printf("%d\t", c[i][j]*c[i][j]);
        }
    printf("\n");
    }
}

int main() {
    //Bai 1: Tinh trung binh tong cac so chia het cho 3 trong mang 1 chieu
    int n1;
    int sum = 0;
    int count = 0;
    float average;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n1);
    // Nhap mang 1 chieu
    int a[n1];
    for (int i = 0; i < n1; i++) {
        printf("Nhap mang a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    // Tinh tong cac so chia het cho 3
    for (int i = 0; i < n1; i++) {
        if (a[i] % 3 == 0) {
            sum += a[i];
            count++;
        }
    }
    if (count > 0) {
        average = sum / count;
        printf("Trung binh tong cac so chia het cho 3 trong mang la: %.2f\n", average);
    } else {
        printf("Khong co so nao chia het cho 3 trong mang.\n");
    }   
    // Bai 2: Tim gia tri lon nhat va nho nhat trong mang 1 chieu
	int x;
	printf("\nNhap so phan tu cua mang: ");
	scanf("%d",&x);
	nhapMangminmax(a,x);
	printf("\nGia tri lon nhat cua mang la: %d", max(a,x));
	printf("\nGia tri nho nhat cua mang la: %d", min(a,x));
    // Bai 3: Sap xep mang theo thu tu giam dan
    int t,temp;
	int b[t];
	printf("\nNhap so phan tu cua mang: ");
	scanf("%d",&t);
    getchar();
	nhapMangsapxep(b,t);
	kiemtra(b,t);
	printf("\nMang sau khi sap xep:");
	for(int i=0;i<t;i++){
		printf("\nVi tri thu mang [%d] la: %d",i,b[i]);
	}    
    // Bai 4: Tinh binh phuong phan tu trong mang 2 chieu
    int c[M][N];
    int m;
    int n;
    printf("\nNhap so n hang: ");
	scanf("%d",&n);
    printf("Nhap so m cot: ");
	scanf("%d",&m);
    nhapMatran(c,m,n);
    xuatMatran(c,m,n);
    return 0;
}
