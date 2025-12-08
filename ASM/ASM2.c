#include <stdio.h>
#include <math.h>

int main() {
    double x;
    printf("Nhap vao 1 so: ");
    scanf("%lf", &x);
    
    // Kiểm tra số nguyên
    int isInt = (x == (int)x);
    printf("So nguyen? %s\n", isInt ? "CO" : "KHONG");
    
    if (isInt) {
        int n = (int)x, isPrime = (n >= 2), i;
        
        // Kiểm tra số nguyên tố
        for (i = 2; i * i <= n && isPrime; i++)
            if (n % i == 0) isPrime = 0;
        printf("So nguyen to? %s\n", isPrime ? "CO" : "KHONG");
        
        // Kiểm tra số chính phương
        int sq = (int)sqrt(n);
        printf("So chinh phuong? %s\n", (sq * sq == n) ? "CO" : "KHONG");
    }
    
    return 0;
}