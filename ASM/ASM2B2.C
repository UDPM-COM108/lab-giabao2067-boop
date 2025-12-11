#include <stdio.h>

int main() {
    int x, y, a, b, ucln, bcnn;
    
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("Nhap y: ");
    scanf("%d", &y);
    
    a = x;
    b = y;
    
    // Tìm ƯSCLN
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    ucln = a;
    
    // Tìm BSCNN
    bcnn = (x * y) / ucln;
    
    printf("\nUoc so chung lon nhat: %d\n", ucln);
    printf("Boi so chung nho nhat: %d\n", bcnn);
    
    return 0;
}