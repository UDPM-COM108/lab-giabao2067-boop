#include <stdio.h>

int main() {
    int n;
    
    // Nhập số phần tử
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    // Khai báo mảng
    int arr[n];
    
    // NHẬP MẢNG
    printf("\n--- NHAP MANG ---\n");
    for(int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    // XUẤT MẢNG
    printf("\n--- XUAT MANG ---\n");
    printf("Mang vua nhap: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    // TỔNG MẢNG
    int tong = 0;
    for(int i = 0; i < n; i++) {
        tong += arr[i];
    }
    
    printf("\n\n--- TONG MANG ---\n");
    printf("Tong cac phan tu: %d\n", tong);
    
    return 0;
}