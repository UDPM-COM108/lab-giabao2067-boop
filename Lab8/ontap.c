#include <stdio.h>

int main(){
/*// khoi tao mang 1 chieu
    int a[5];
    for(int i=0; i<5; i++){
        printf("Nhap phan tu a [%d]:", i);
        scanf("%d", &a[i]);
    }    
// xuat mang 1 chieu
    for (int i=0; i<5; i++){
        printf("\nXuat mang a[%d]",i);
        printf("%d", a[i]);
    }
// tong mang a
int tong=0;
for (int i=0; i<5; i++){
    tong += a[i];
}
printf(" tong cac phan tu mang a la: %d",tong);
*/
 // Khoi tao mang 2 chieu
    /*int a[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    // Xuat mang 2 chieu
    printf("Mang 2 chieu:\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    */
    int a[5] = {5, 2, 8, 1, 9};
    int n = 5;
    
    printf("Mang ban dau: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    // Sắp xếp
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                // Hoán đổi
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
    printf("\nMang sau khi sap xep: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

